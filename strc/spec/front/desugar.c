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
Symbol sym_Con_3;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_ExplodeCong_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Undefined_0;
Symbol sym_Anno_2;
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
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
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_t_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_k_9;
ATerm term_p_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_p_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_a_7;
void init_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_g_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_h_17);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_16);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_g_16);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_g_16);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_g_16);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm a_4 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm);
ATerm genzip_4_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_15 (ATerm k_15, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm i_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm e_4 (ATerm x_18, ATerm a_19, ATerm b_19, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm desugar_spec_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm);
ATerm f_4 (ATerm q_50, ATerm r_50, ATerm);
ATerm g_4 (ATerm e_54, ATerm f_54, ATerm);
ATerm i_4 (ATerm u_103 (ATerm), ATerm d_491, ATerm i_54, ATerm);
ATerm h_4 (ATerm a_54, ATerm b_54, ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm output_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm o_36 (ATerm i_36, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_4 (ATerm g_54, ATerm);
ATerm k_4 (ATerm s_50, ATerm t_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_37 (ATerm y_36, ATerm);
ATerm c_38 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm);
ATerm d_38 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm);
ATerm l_4 (ATerm);
ATerm q_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm e_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm s_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm t_4 (ATerm h_55, ATerm i_55, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_4 (ATerm w_39, ATerm x_39, ATerm v_39, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm m_4 (ATerm a_38, ATerm b_38, ATerm);
ATerm foldr_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm need_help_1_0 (ATerm u_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_4 (ATerm g_48, ATerm h_48, ATerm);
ATerm debug_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm t_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm q_4 (ATerm n_41, ATerm o_41, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_109 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm parse_options_1_0 (ATerm w_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  c_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      e_0 = ATgetArgument(t, 0);
      b_0 = ATgetArgument(t, 1);
      {
        ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL;
        t = c_0;
        t = new_0_0(t);
        o_0 = t;
        t = new_0_0(t);
        p_0 = t;
        t = new_0_0(t);
        q_0 = t;
        t = new_0_0(t);
        r_0 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_0), q_0), p_0), o_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_0), (ATerm) ATmakeAppl(sym_Var_1, q_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_0, (ATerm)ATmakeAppl(sym_Var_1, o_0), (ATerm) ATmakeAppl(sym_Var_1, p_0)), (ATerm) ATmakeAppl(sym_BAM_3, b_0, (ATerm)ATmakeAppl(sym_Var_1, q_0), (ATerm) ATmakeAppl(sym_Var_1, r_0)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_7, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_0)), (ATerm) ATmakeAppl(sym_Var_1, p_0))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_0 = ATgetArgument(t, 0);
          {
            ATerm s_0 = NULL,t_0 = NULL,v_0 = NULL,w_0 = NULL;
            t = c_0;
            t = new_0_0(t);
            v_0 = t;
            t = e_0;
            {
              ATerm a_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_0 != NULL) && (s_0 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_0 = ATgetArgument(t, 0);
                    if(((t_0 != NULL) && (t_0 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_0 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, v_0);
                return(t);
              }
              t = oncetd_1_0(a_0, t);
              w_0 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_7, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_0)), not_null(s_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_0)), (ATerm) ATmakeAppl(sym_Build_1, w_0))));
            }
          }
        }
      else
        {
          ATerm c_1 = NULL,f_1 = NULL,g_1 = NULL,o_1 = NULL,q_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              e_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_0;
          t = new_0_0(t);
          g_1 = t;
          t = new_0_0(t);
          o_1 = t;
          t = e_0;
          {
            ATerm f_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((c_1 != NULL) && (c_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_1 = ATgetArgument(t, 0);
                  if(((f_1 != NULL) && (f_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_1);
              return(t);
            }
            t = oncetd_1_0(f_0, t);
            q_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_7, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_1))))), (ATerm)ATmakeAppl(sym_Var_1, g_1), (ATerm) ATmakeAppl(sym_Op_2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_1)), not_null(c_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
        t = t_1;
        t = new_0_0(t);
        a_2 = t;
        t = u_1;
        {
          ATerm n_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_1 != NULL) && (x_1 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_1 = ATgetArgument(t, 0);
                if(((z_1 != NULL) && (z_1 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_2), x_1);
            return(t);
          }
          t = pat_td_1_0(n_0, t);
          b_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_7, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_1))))));
        }
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL;
              t = t_1;
              t = new_0_0(t);
              g_2 = t;
              t = u_1;
              {
                ATerm u_0 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_2 != NULL) && (e_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_2);
                  return(t);
                }
                t = pat_td_1_0(u_0, t);
                h_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, g_2)), not_null(e_2))));
              }
              ;
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
              {
                ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,p_2 = NULL;
                t = t_1;
                t = new_0_0(t);
                l_2 = t;
                t = u_1;
                {
                  ATerm x_0 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_2 = ATgetArgument(t, 0);
                        if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                    return(t);
                  }
                  t = pat_td_1_0(x_0, t);
                  p_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_2)), not_null(k_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_80(t);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
        g_7 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_7 = ATgetArgument(t, 0);
            i_7 = ATgetArgument(t, 1);
            {
              ATerm a_1 = NULL,e_1 = NULL,a_3 = NULL;
              t = SSLgetAnnotations(g_7);
              a_1 = t;
              t = i_7;
              {
                ATerm y_0 (ATerm t)
                {
                  t = pat_td_1_0(a_80, t);
                  return(t);
                }
                t = fetch_1_0(y_0, t);
                e_1 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, h_7, e_1);
                a_3 = t;
                t = SSLsetAnnotations(a_3, a_1);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_7 = ATgetArgument(t, 0);
                i_7 = ATgetArgument(t, 1);
                {
                  ATerm w_7 = t;
                  int x_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_1 = NULL,w_1 = NULL,c_3 = NULL;
                      t = SSLgetAnnotations(g_7);
                      p_1 = t;
                      t = i_7;
                      t = pat_td_1_0(a_80, t);
                      w_1 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_7, w_1);
                      c_3 = t;
                      t = SSLsetAnnotations(c_3, p_1);
                      ;
                      LocalPopChoice(x_7);
                    }
                  else
                    {
                      t = w_7;
                      {
                        ATerm r_2 = NULL,u_2 = NULL,d_3 = NULL;
                        t = SSLgetAnnotations(g_7);
                        r_2 = t;
                        t = h_7;
                        t = pat_td_1_0(a_80, t);
                        u_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, u_2, i_7);
                        d_3 = t;
                        t = SSLsetAnnotations(d_3, r_2);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_7 = ATgetArgument(t, 0);
                    i_7 = ATgetArgument(t, 1);
                    f_7 = ATgetArgument(t, 2);
                    {
                      ATerm n_3 = NULL,u_3 = NULL,f_3 = NULL;
                      t = SSLgetAnnotations(g_7);
                      n_3 = t;
                      t = f_7;
                      {
                        ATerm z_0 (ATerm t)
                        {
                          t = pat_td_1_0(a_80, t);
                          return(t);
                        }
                        t = fetch_1_0(z_0, t);
                        u_3 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, h_7, i_7, u_3);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, n_3);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_7 = ATgetArgument(t, 0);
                        i_7 = ATgetArgument(t, 1);
                        f_7 = ATgetArgument(t, 2);
                        {
                          ATerm u_4 = NULL,b_5 = NULL,g_3 = NULL;
                          t = SSLgetAnnotations(g_7);
                          u_4 = t;
                          t = f_7;
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = pat_td_1_0(a_80, t);
                              return(t);
                            }
                            t = fetch_1_0(b_1, t);
                            b_5 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, h_7, i_7, b_5);
                            g_3 = t;
                            t = SSLsetAnnotations(g_3, u_4);
                          }
                        }
                      }
                    else
                      {
                        ATerm o_5 = NULL,v_5 = NULL,h_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_7 = ATgetArgument(t, 0);
                            i_7 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_7);
                        o_5 = t;
                        t = i_7;
                        t = pat_td_1_0(a_80, t);
                        v_5 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_7, v_5);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, o_5);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm t_7 = NULL,a_8 = NULL;
  t_7 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL,c_8 = NULL,e_8 = NULL,n_8 = NULL;
        t = t_7;
        t = new_0_0(t);
        e_8 = t;
        t = a_8;
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_8 != NULL) && (b_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_8 = ATgetArgument(t, 0);
                if(((c_8 != NULL) && (c_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, e_8);
            return(t);
          }
          t = pat_td_1_0(d_1, t);
          n_8 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_8, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_8)), not_null(b_8))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_8)))), (ATerm) ATmakeAppl(sym_Build_1, n_8)));
        }
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm f_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_8 = NULL,q_8 = NULL,v_8 = NULL;
              t = t_7;
              t = new_0_0(t);
              q_8 = t;
              t = a_8;
              {
                ATerm h_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_8 != NULL) && (o_8 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_8);
                  return(t);
                }
                t = pat_td_1_0(h_1, t);
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_8)))), (ATerm) ATmakeAppl(sym_Build_1, v_8)));
              }
              ;
              LocalPopChoice(g_8);
            }
          else
            {
              t = f_8;
              {
                ATerm w_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL;
                t = t_7;
                t = new_0_0(t);
                z_8 = t;
                t = a_8;
                {
                  ATerm i_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_8 != NULL) && (w_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_8 = ATgetArgument(t, 0);
                        if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                    return(t);
                  }
                  t = pat_td_1_0(i_1, t);
                  a_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_8), not_null(x_8), (ATerm) ATmakeAppl(sym_Var_1, z_8))), (ATerm) ATmakeAppl(sym_Build_1, a_9)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm f_9 = NULL,i_9 = NULL,j_9 = NULL,l_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_9, q_9);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_9 = ATgetArgument(t, 0);
          t = l_9;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_9 = ATgetFirst((ATermList) t);
              i_9 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, f_9, (ATerm) ATmakeAppl(sym_LChoices_1, i_9));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_8;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_9 = ATgetArgument(t, 0);
              t = l_9;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_9 = ATgetFirst((ATermList) t);
                  i_9 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, f_9, (ATerm) ATmakeAppl(sym_Choices_1, i_9));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_8;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_9 = ATgetArgument(t, 0);
                  t = l_9;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_9 = ATgetFirst((ATermList) t);
                      i_9 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_9, (ATerm) ATmakeAppl(sym_Seqs_1, i_9));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_p_8;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      l_9 = ATgetArgument(t, 0);
                      q_9 = ATgetArgument(t, 1);
                      j_9 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, q_9, (ATerm) ATmakeAppl(sym_Op_2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, j_9), l_9)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          l_9 = ATgetArgument(t, 0);
                          q_9 = ATgetArgument(t, 1);
                          j_9 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_9)), l_9), (ATerm) ATmakeAppl(sym_Build_1, q_9)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              l_9 = ATgetArgument(t, 0);
                              q_9 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_9, (ATerm) ATmakeAppl(sym_Match_1, q_9));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  l_9 = ATgetArgument(t, 0);
                                  q_9 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_9), q_9);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      l_9 = ATgetArgument(t, 0);
                                      q_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_9), l_9);
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
  ATerm y_8 = t;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL,t_3 = NULL;
      o_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_11);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_11);
      t_3 = t;
      t = SSLsetAnnotations(t_3, l_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_8;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_9;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_11 = ATgetFirst((ATermList) t);
      q_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(match_cons(r_9, sym__2))
        {
          r_11 = ATgetArgument(r_9, 0);
          s_11 = ATgetArgument(r_9, 1);
        }
      else
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(match_cons(s_9, sym__2))
          {
            t_11 = ATgetArgument(s_9, 0);
            w_11 = ATgetArgument(s_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_11), r_11), (ATerm) ATinsert(CheckATermList(w_11), s_11));
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_9;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_12 = ATgetFirst((ATermList) t);
      c_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if(match_cons(t_9, sym__2))
        {
          j_12 = ATgetArgument(t_9, 0);
          k_12 = ATgetArgument(t_9, 1);
        }
      else
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(match_cons(u_9, sym__2))
          {
            l_12 = ATgetArgument(u_9, 0);
            m_12 = ATgetArgument(u_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_12), j_12), (ATerm) ATinsert(CheckATermList(m_12), k_12));
  return(t);
}
ATerm a_4 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,b_4 = NULL;
  t = b_24;
  t = fetch_1_0(j_1, t);
  t = b_24;
  t = genzip_4_0(k_1, l_1, m_1, LiftPrimArg_0_0, t);
  k_11 = t;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_11);
  f_11 = t;
  t = g_11;
  t = concat_0_0(t);
  i_11 = t;
  t = h_11;
  t = genzip_4_0(n_1, r_1, s_1, _id, t);
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_11, j_11);
  b_4 = t;
  t = SSLsetAnnotations(b_4, f_11);
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(match_cons(v_9, sym__2))
          {
            z_10 = ATgetArgument(v_9, 0);
            a_11 = ATgetArgument(v_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_10), (ATerm) ATmakeAppl(sym_CallT_3, z_23, a_24, a_11)));
  return(t);
}
ATerm genzip_4_0 (ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_86(t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          ATerm r_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,e_13 = NULL,w_4 = NULL;
          t = h_86(t);
          e_13 = t;
          if(match_cons(t, sym__2))
            {
              y_12 = ATgetArgument(t, 0);
              z_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_13);
          r_12 = t;
          t = y_12;
          t = j_86(t);
          a_13 = t;
          t = z_12;
          t = g_13(t);
          b_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_13, b_13);
          w_4 = t;
          t = SSLsetAnnotations(w_4, r_12);
          t = i_86(t);
        }
      }
    return(t);
  }
  t = g_13(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm m_14 (ATerm t)
  {
    ATerm g_14 = NULL,h_14 = NULL,l_14 = NULL;
    l_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_14 = ATgetFirst((ATermList) t);
        h_14 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_6 = NULL,q_7 = NULL,e_5 = NULL;
          t = SSLgetAnnotations(l_14);
          q_6 = t;
          t = h_14;
          t = m_14(t);
          q_7 = t;
          t = (ATerm) ATinsert(CheckATermList(q_7), g_14);
          e_5 = t;
          t = SSLsetAnnotations(e_5, q_6);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_14;
        t = l_88(t);
      }
    return(t);
  }
  t = m_14(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_14 = NULL,w_14 = NULL,y_14 = NULL;
  t_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_14;
    }
  else
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(y_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_14 = ATgetFirst((ATermList) t);
          if(((y_14 != NULL) && (y_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_14;
      t = at_end_1_0(v_1, t);
    }
  return(t);
}
ATerm w_15 (ATerm k_15, ATerm t)
{
  ATerm n_15 = NULL;
  t = k_15;
  {
    ATerm c_10 = t;
    if((PushChoice() == 0))
      {
        ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,i_5 = NULL;
        q_15 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_15);
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_15);
        i_5 = t;
        t = SSLsetAnnotations(i_5, o_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_10;
      }
    t = new_0_0(t);
    n_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_15), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_15)))), (ATerm) ATmakeAppl(sym_Var_1, n_15)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL;
  r_15 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_15 = ATgetArgument(t, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_15(r_15, t);
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_p_8, (ATerm) ATmakeAppl(sym_Var_1, u_15)));
          }
      }
    }
  else
    {
      t = w_15(r_15, t);
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm f_10 = t;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,p_5 = NULL;
      d_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_9);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
      p_5 = t;
      t = SSLsetAnnotations(p_5, b_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_10;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_9 = ATgetFirst((ATermList) t);
      g_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, g_9);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm h_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym__2))
        {
          h_9 = ATgetArgument(h_10, 0);
          m_9 = ATgetArgument(h_10, 1);
        }
      else
        _fail(t);
      {
        ATerm i_10 = ATgetArgument(t, 1);
        if(match_cons(i_10, sym__2))
          {
            n_9 = ATgetArgument(i_10, 0);
            o_9 = ATgetArgument(i_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_9), h_9), (ATerm) ATinsert(CheckATermList(o_9), m_9));
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_9;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm p_9 = NULL,y_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_9 = ATgetFirst((ATermList) t);
      y_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_9, y_9);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(match_cons(j_10, sym__2))
        {
          z_9 = ATgetArgument(j_10, 0);
          a_10 = ATgetArgument(j_10, 1);
        }
      else
        _fail(t);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(match_cons(k_10, sym__2))
          {
            b_10 = ATgetArgument(k_10, 0);
            g_10 = ATgetArgument(k_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_10), z_9), (ATerm) ATinsert(CheckATermList(g_10), a_10));
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm l_10 = t;
  if((PushChoice() == 0))
    {
      ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,r_5 = NULL;
      f_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_12);
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_12);
      r_5 = t;
      t = SSLsetAnnotations(r_5, d_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_10;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_12 = ATgetFirst((ATermList) t);
      h_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_12, h_12);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_12 = NULL,n_12 = NULL,o_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(match_cons(m_10, sym__2))
        {
          i_12 = ATgetArgument(m_10, 0);
          n_12 = ATgetArgument(m_10, 1);
        }
      else
        _fail(t);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(match_cons(n_10, sym__2))
          {
            o_12 = ATgetArgument(n_10, 0);
            q_12 = ATgetArgument(n_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_12), i_12), (ATerm) ATinsert(CheckATermList(q_12), n_12));
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_9;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_12 = ATgetFirst((ATermList) t);
      t_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(match_cons(o_10, sym__2))
        {
          u_12 = ATgetArgument(o_10, 0);
          v_12 = ATgetArgument(o_10, 1);
        }
      else
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(match_cons(p_10, sym__2))
          {
            w_12 = ATgetArgument(p_10, 0);
            x_12 = ATgetArgument(p_10, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_12), u_12), (ATerm) ATinsert(CheckATermList(x_12), v_12));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm p_21 = NULL,s_21 = NULL,v_21 = NULL,x_21 = NULL;
  s_21 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      p_21 = ATgetArgument(t, 2);
      {
        ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,q_5 = NULL;
        t = p_21;
        t = fetch_1_0(y_1, t);
        t = p_21;
        t = genzip_4_0(c_2, d_2, f_2, LiftPrimArg_0_0, t);
        u_8 = t;
        if(match_cons(t, sym__2))
          {
            m_8 = ATgetArgument(t, 0);
            r_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_8);
        l_8 = t;
        t = m_8;
        t = concat_0_0(t);
        s_8 = t;
        t = r_8;
        t = genzip_4_0(i_2, m_2, n_2, _id, t);
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
        q_5 = t;
        t = SSLsetAnnotations(q_5, l_8);
        if(match_cons(t, sym__2))
          {
            i_8 = ATgetArgument(t, 0);
            {
              ATerm q_10 = ATgetArgument(t, 1);
              if(match_cons(q_10, sym__2))
                {
                  j_8 = ATgetArgument(q_10, 0);
                  k_8 = ATgetArgument(q_10, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_8), (ATerm) ATmakeAppl(sym_PrimT_3, v_21, x_21, k_8)));
      }
    }
  else
    {
      ATerm d_11 = NULL,e_11 = NULL,n_11 = NULL,u_11 = NULL,v_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,s_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          v_21 = ATgetArgument(t, 0);
          x_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_21;
      t = fetch_1_0(o_2, t);
      t = x_21;
      t = genzip_4_0(q_2, s_2, t_2, LiftPrimArg_0_0, t);
      a_12 = t;
      if(match_cons(t, sym__2))
        {
          v_11 = ATgetArgument(t, 0);
          x_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_12);
      u_11 = t;
      t = v_11;
      t = concat_0_0(t);
      y_11 = t;
      t = x_11;
      t = genzip_4_0(v_2, w_2, x_2, _id, t);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
      s_5 = t;
      t = SSLsetAnnotations(s_5, u_11);
      if(match_cons(t, sym__2))
        {
          d_11 = ATgetArgument(t, 0);
          {
            ATerm r_10 = ATgetArgument(t, 1);
            if(match_cons(r_10, sym__2))
              {
                e_11 = ATgetArgument(r_10, 0);
                n_11 = ATgetArgument(r_10, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, d_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_11), (ATerm) ATmakeAppl(sym_PrimT_3, v_21, (ATerm)ATempty, n_11)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm v_22 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_98(t);
        t = v_22(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
      }
    return(t);
  }
  t = v_22(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,c_26 = NULL,d_26 = NULL;
  d_26 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      c_26 = ATgetArgument(t, 2);
      {
        ATerm m_13 = NULL,b_6 = NULL;
        t = SSLgetAnnotations(d_26);
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_25, z_25, c_26);
        b_6 = t;
        t = SSLsetAnnotations(b_6, m_13);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = d_26;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm u_10 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(y_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_10;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  y_27 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
      x_27 = ATgetArgument(t, 2);
      {
        ATerm j_14 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(y_27);
        j_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, z_27, a_28, x_27);
        d_6 = t;
        t = SSLsetAnnotations(d_6, j_14);
      }
    }
  else
    {
      ATerm b_15 = NULL,e_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          z_27 = ATgetArgument(t, 0);
          a_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_27);
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, z_27, a_28);
      e_6 = t;
      t = SSLsetAnnotations(e_6, b_15);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_10 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(z_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_10;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_28;
  if(match_cons(t, sym_StratRule_3))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      k_28 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_28), (ATerm) ATmakeAppl(sym_Where_1, k_28)), i_28));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_28 = ATgetArgument(t, 0);
          j_28 = ATgetArgument(t, 1);
          k_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_28;
      t = pureterm_0_0(t);
      t = j_28;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, j_28)), (ATerm) ATmakeAppl(sym_Where_1, k_28)), (ATerm) ATmakeAppl(sym_Match_1, i_28)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm f_29 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_82(t);
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = SRTS_one(f_29, t);
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_4 (ATerm x_18, ATerm a_19, ATerm b_19, ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  t = new_0_0(t);
  l_29 = t;
  t = x_18;
  {
    ATerm b_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_11 = ATgetArgument(t, 0);
          if(match_cons(b_11, sym_Var_1))
            {
              if(((k_29 != NULL) && (k_29 != ATgetArgument(b_11, 0))))
                _fail(ATgetArgument(b_11, 0));
              else
                k_29 = ATgetArgument(b_11, 0);
            }
          else
            _fail(t);
          if(((i_29 != NULL) && (i_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_29 = ATgetArgument(t, 1);
          {
            ATerm c_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_29);
      return(t);
    }
    t = oncetd_1_0(b_3, t);
    m_29 = t;
    t = a_19;
    {
      ATerm e_3 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm p_12 = ATgetArgument(t, 0);
            if(match_cons(p_12, sym_Var_1))
              {
                if(((k_29 != NULL) && (k_29 != ATgetArgument(p_12, 0))))
                  _fail(ATgetArgument(p_12, 0));
                else
                  k_29 = ATgetArgument(p_12, 0);
              }
            else
              _fail(t);
            if(((j_29 != NULL) && (j_29 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              j_29 = ATgetArgument(t, 1);
            {
              ATerm c_13 = ATgetArgument(t, 2);
              if(match_cons(c_13, sym_CallT_3))
                {
                  if(((h_29 != NULL) && (h_29 != ATgetArgument(c_13, 0))))
                    _fail(ATgetArgument(c_13, 0));
                  else
                    h_29 = ATgetArgument(c_13, 0);
                  {
                    ATerm d_13 = ATgetArgument(c_13, 1);
                    if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
                      _fail(t);
                  }
                  {
                    ATerm f_13 = ATgetArgument(c_13, 2);
                    if(((ATgetType(f_13) != AT_LIST) || !(ATisEmpty(f_13))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, l_29);
        return(t);
      }
      t = oncetd_1_0(e_3, t);
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_29), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, m_29, n_29, (ATerm) ATmakeAppl(sym_Seq_2, b_19, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(h_29), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_29), not_null(j_29), term_p_8))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_29)), (ATerm) ATmakeAppl(sym_Var_1, l_29))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_30 = NULL,m_30 = NULL,q_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
          t_30 = t;
          if(match_cons(t, sym_SRule_1))
            {
              u_30 = ATgetArgument(t, 0);
              t = u_30;
              if(match_cons(t, sym_Rule_3))
                {
                  k_30 = ATgetArgument(t, 0);
                  m_30 = ATgetArgument(t, 1);
                  q_30 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_30;
              t = e_4(k_30, m_30, q_30, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm y_15 = NULL,b_16 = NULL,l_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  u_30 = ATgetArgument(t, 0);
                  v_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_30);
              y_15 = t;
              t = v_30;
              t = desugarRule_0_0(t);
              b_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, u_30, b_16);
              l_6 = t;
              t = SSLsetAnnotations(l_6, y_15);
            }
          ;
          LocalPopChoice(k_13);
        }
      else
        {
          t = j_13;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    t = topdown_1_0(u_81, t);
    return(t);
  }
  t = u_81(t);
  t = SRTS_all(i_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm l_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = l_13;
    }
  t = repeat_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,e_32 = NULL;
            x_31 = t;
            if(match_cons(t, sym_CallT_3))
              {
                y_31 = ATgetArgument(t, 0);
                z_31 = ATgetArgument(t, 1);
                e_32 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_31;
            t = a_4(y_31, z_31, e_32, t);
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            {
              ATerm s_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = s_13;
                  {
                    ATerm w_13 = t;
                    int x_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(x_13);
                      }
                    else
                      {
                        t = w_13;
                        {
                          ATerm y_13 = t;
                          int z_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_14 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      t_32 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_32;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      u_32 = ATgetArgument(t, 0);
                                      t = u_32;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          u_32 = ATgetArgument(t, 0);
                                          v_32 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, u_32, v_32);
                                    }
                                  ;
                                  LocalPopChoice(b_14);
                                }
                              else
                                {
                                  t = a_14;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(z_13);
                            }
                          else
                            {
                              t = y_13;
                              t = Expl_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(j_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
      x_34 = t;
      if(match_cons(t, sym_SDef_3))
        {
          y_34 = ATgetArgument(t, 0);
          z_34 = ATgetArgument(t, 1);
          a_35 = ATgetArgument(t, 2);
          {
            ATerm k_16 = NULL,p_16 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(x_34);
            k_16 = t;
            t = a_35;
            t = desugar_0_0(t);
            p_16 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_34, z_34, p_16);
            n_6 = t;
            t = SSLsetAnnotations(n_6, k_16);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_34 = ATgetArgument(t, 0);
              z_34 = ATgetArgument(t, 1);
              a_35 = ATgetArgument(t, 2);
              b_35 = ATgetArgument(t, 3);
              {
                ATerm t_17 = NULL,j_18 = NULL,s_6 = NULL;
                t = SSLgetAnnotations(x_34);
                t_17 = t;
                t = b_35;
                t = desugar_0_0(t);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_34, z_34, a_35, j_18);
                s_6 = t;
                t = SSLsetAnnotations(s_6, t_17);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  y_34 = ATgetArgument(t, 0);
                  z_34 = ATgetArgument(t, 1);
                  a_35 = ATgetArgument(t, 2);
                  {
                    ATerm j_19 = NULL,t_6 = NULL;
                    t = SSLgetAnnotations(x_34);
                    j_19 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDef_3, y_34, z_34, a_35);
                    t_6 = t;
                    t = SSLsetAnnotations(t_6, j_19);
                  }
                }
              else
                {
                  ATerm l_20 = NULL,u_6 = NULL;
                  if(match_cons(t, sym_ExtSDefInl_4))
                    {
                      y_34 = ATgetArgument(t, 0);
                      z_34 = ATgetArgument(t, 1);
                      a_35 = ATgetArgument(t, 2);
                      b_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_34);
                  l_20 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, y_34, z_34, a_35, b_35);
                  u_6 = t;
                  t = SSLsetAnnotations(u_6, l_20);
                }
            }
        }
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = debug_1_0(m_3, t);
      _fail(t);
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  t = map_1_0(l_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,z_6 = NULL;
  l_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_35 = ATgetFirst((ATermList) t);
      i_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_35);
  g_35 = t;
  t = h_35;
  t = z_65(t);
  j_35 = t;
  t = i_35;
  t = a_66(t);
  k_35 = t;
  t = (ATerm) ATinsert(CheckATermList(k_35), j_35);
  z_6 = t;
  t = SSLsetAnnotations(z_6, g_35);
  return(t);
}
ATerm f_4 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm m_35 = NULL;
  t = SSL_fputc(q_50, r_50);
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_35);
  return(t);
}
ATerm g_4 (ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm n_35 = NULL;
  t = SSL_write_term_to_stream_text(e_54, f_54);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_35);
  return(t);
}
ATerm i_4 (ATerm u_103 (ATerm), ATerm d_491, ATerm i_54, ATerm t)
{
  ATerm o_35 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_491, term_i_14);
  t = l_4(t);
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_35, i_54);
  t = u_103(t);
  t = fclose_0_0(t);
  t = i_54;
  return(t);
}
ATerm h_4 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm p_35 = NULL;
  t = SSL_write_term_to_stream_baf(a_54, b_54);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_35);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      if(match_cons(k_14, sym_Stream_1))
        {
          s_35 = ATgetArgument(k_14, 0);
        }
      else
        _fail(t);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(s_35, t_35, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          z_35 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      a_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(z_35, a_36, t);
  w_35 = t;
  t = term_p_14;
  x_35 = t;
  t = w_35;
  if(match_cons(t, sym_Stream_1))
    {
      y_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, w_35);
  t = f_4(x_35, y_35, t);
  return(t);
}
ATerm output_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = d_108(t);
  r_35 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = term_u_14;
      }
    q_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
    {
      ATerm v_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_14;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
          LocalPopChoice(x_14);
          if(match_cons(t, sym__2))
            {
              ATerm a_15 = ATgetArgument(t, 0);
              ATerm c_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_4(o_3, q_35, r_35, t);
        }
      else
        {
          t = v_14;
          if(match_cons(t, sym__2))
            {
              ATerm d_15 = ATgetArgument(t, 0);
              ATerm e_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_4(p_3, q_35, r_35, t);
        }
    }
  }
  return(t);
}
ATerm o_36 (ATerm i_36, ATerm t)
{
  t = SSL_fclose(i_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_36 = ATgetArgument(t, 0);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_36);
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = o_36(m_36, t);
          }
      }
    }
  else
    {
      t = o_36(m_36, t);
    }
  return(t);
}
ATerm j_4 (ATerm g_54, ATerm t)
{
  t = SSL_read_term_from_stream(g_54);
  return(t);
}
ATerm k_4 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm p_36 = NULL;
  t = SSL_fopen(s_50, t_50);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_stdin_stream();
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_stdout_stream();
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_stderr_stream();
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_36);
  return(t);
}
ATerm z_37 (ATerm y_36, ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_explode_term(y_36);
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
          {
            z_36 = ATgetFirst((ATermList) i_15);
            {
              ATerm j_15 = (ATerm) ATgetNext((ATermList) i_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_38 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,b_7 = NULL;
  t = SSLgetAnnotations(e_37);
  h_37 = t;
  t = c_37;
  if(match_cons(t, sym_Path_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_37, d_37);
  b_7 = t;
  t = SSLsetAnnotations(b_7, h_37);
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(f_37, g_37, t);
  return(t);
}
ATerm d_38 (ATerm m_37, ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,u_37 = NULL,c_7 = NULL;
  t = SSLgetAnnotations(o_37);
  r_37 = t;
  t = SSL_is_string(m_37);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, n_37);
  c_7 = t;
  t = SSLsetAnnotations(c_7, r_37);
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(p_37, q_37, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_37(w_37, t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_38(x_37, y_37, w_37, t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = d_38(x_37, y_37, w_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_37(w_37, t);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  ATerm x_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_38 = NULL;
      h_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_38, term_a_16);
      t = l_4(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = x_15;
      t = debug_1_0(q_3, t);
      _fail(t);
    }
  f_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(g_38, t);
  e_38 = t;
  t = f_38;
  t = fclose_0_0(t);
  t = e_38;
  return(t);
}
ATerm input_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      t = term_f_16;
    }
  t = ReadFromFile_0_0(t);
  t = e_108(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  j_38 = t;
  t = term_g_16;
  t = whoami_0_0(t);
  k_38 = t;
  t = term_h_16;
  m_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), k_38), term_i_16);
  n_38 = t;
  t = SSL_printnl(m_38, n_38);
  t = term_l_16;
  l_38 = t;
  t = SSL_exit(l_38);
  t = j_38;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  if(match_string(t, "-k"))
    {
      t = p_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_38;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  t = SSL_string_to_int(q_38);
  r_38 = t;
  t = term_m_16;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, r_38);
  t = t_4(s_38, r_38, t);
  t = q_38;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  if(match_string(t, "-S"))
    {
      t = u_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_38;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  t = term_r_16;
  v_38 = t;
  t = term_s_16;
  w_38 = t;
  t = term_t_16;
  t = t_4(v_38, w_38, t);
  t = term_u_16;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  t = SSL_string_to_int(x_38);
  y_38 = t;
  t = term_r_16;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, y_38);
  t = t_4(z_38, y_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_38);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  t = term_x_16;
  a_39 = t;
  t = term_g_16;
  b_39 = t;
  t = term_y_16;
  t = t_4(a_39, b_39, t);
  t = term_z_16;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, y_3, t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, c_4, d_4, t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = Option_3_0(n_4, o_4, s_4, t);
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm h_55, ATerm i_55, ATerm t)
{
  ATerm c_39 = NULL;
  t = term_f_17;
  c_39 = t;
  t = SSL_table_put(c_39, h_55, i_55);
  t = (ATerm) ATmakeAppl(sym__3, term_f_17, h_55, i_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,h_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
      t = term_g_16;
      t = h_0(t);
      i_39 = t;
      t = term_g_17;
      j_39 = t;
      t = term_h_17;
      k_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, i_39);
      t = r_4(j_39, k_39, i_39, t);
      _fail(t);
    }
  else
    {
      ATerm n_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_39 = ATgetFirst((ATermList) t);
          h_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_39;
      t = d_0(t);
      t = term_g_16;
      t = g_0(t);
      n_39 = t;
      t = (ATerm) ATinsert(CheckATermList(h_39), n_39);
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  if(match_string(t, "-o"))
    {
      t = p_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_39;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  q_39 = t;
  t = term_s_14;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, q_39);
  t = t_4(r_39, q_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_39);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
ATerm r_4 (ATerm w_39, ATerm x_39, ATerm v_39, ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,y_39 = NULL;
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            ATerm m_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
        t = q_4(w_39, x_39, t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATempty;
      }
    u_39 = t;
    t = (ATerm) ATinsert(CheckATermList(u_39), v_39);
    y_39 = t;
    t = SSL_table_put(w_39, x_39, y_39);
    t = t_39;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
      t = term_g_16;
      t = m_0(t);
      j_40 = t;
      t = term_g_17;
      k_40 = t;
      t = term_h_17;
      l_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, j_40);
      t = r_4(k_40, l_40, j_40, t);
      _fail(t);
    }
  else
    {
      ATerm p_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_40 = ATgetFirst((ATermList) t);
          g_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_40 = ATgetFirst((ATermList) t);
          i_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_40;
      t = k_0(t);
      t = h_40;
      t = l_0(t);
      p_40 = t;
      t = (ATerm) ATinsert(CheckATermList(i_40), p_40);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm r_40 = NULL;
  r_40 = t;
  if(match_string(t, "-i"))
    {
      t = r_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_40;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  s_40 = t;
  t = term_e_16;
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, s_40);
  t = t_4(t_40, s_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_40);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, a_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_16;
  t = whoami_0_0(t);
  u_40 = t;
  t = term_h_16;
  w_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_17), u_40);
  x_40 = t;
  t = SSL_printnl(w_40, x_40);
  t = term_l_16;
  v_40 = t;
  t = SSL_exit(v_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm m_4 (ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_38, b_38);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      t = SSL_addr(a_38, b_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_40;
      t = w_92(t);
    }
  else
    {
      ATerm e_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_41 = ATgetFirst((ATermList) t);
          b_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_41;
      t = foldr_2_0(w_92, x_92, t);
      e_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_41, e_41);
      t = x_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm k_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(k_21, m_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_41 = NULL,g_21 = NULL,h_21 = NULL;
  t = times_0_0(t);
  h_21 = t;
  t = SSL_explode_term(h_21);
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_21;
  t = foldr_2_0(d_5, f_5, t);
  h_41 = t;
  t = SSL_TicksToSeconds(h_41);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_41;
        if((v_41 != t))
          {
            _fail(t);
          }
        t = u_41;
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_41, w_41);
              ;
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              t = SSL_gtr(v_41, w_41);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_42 = NULL;
        t = term_r_16;
        t = get_config_0_0(t);
        c_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_42, term_l_16);
        t = geq_0_0(t);
        t = a_42;
        t = e_105(t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = a_42;
      }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,h_42 = NULL,i_42 = NULL;
  t = run_time_0_0(t);
  e_42 = t;
  t = term_g_16;
  t = whoami_0_0(t);
  f_42 = t;
  t = term_h_16;
  h_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_18), e_42), term_a_18), f_42);
  i_42 = t;
  t = SSL_printnl(h_42, i_42);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_18), e_42), term_a_18), f_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_16;
  j_42 = t;
  t = SSL_exit(j_42);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_42 = ATgetArgument(t, 0);
          {
            ATerm e_22 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(s_42);
            e_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_42);
            j_7 = t;
            t = SSLsetAnnotations(j_7, e_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      t = fetch_1_0(h_5, t);
    }
  t = u_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_42 = ATgetFirst((ATermList) t);
      w_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_43 = NULL,b_43 = NULL;
        ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_43)), not_null(b_43));
          return(t);
        }
        t = w_42;
        t = j_0(t);
        if(((a_43 != NULL) && (a_43 != t)))
          _fail(t);
        else
          a_43 = t;
        t = v_42;
        t = i_0(t);
        if(((b_43 != NULL) && (b_43 != t)))
          _fail(t);
        else
          b_43 = t;
        t = w_42;
        t = reverse_acc_2_0(i_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_16;
      t = j_0(t);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,l_7 = NULL;
  h_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_43);
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_43);
  l_7 = t;
  t = SSLsetAnnotations(l_7, f_43);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_43), term_f_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      t = fetch_1_0(k_5, t);
    }
  t = term_i_18;
  t = echo_0_0(t);
  t = term_g_17;
  d_43 = t;
  t = term_h_17;
  e_43 = t;
  t = term_k_18;
  t = q_4(d_43, e_43, t);
  t = reverse_acc_2_0(_id, l_5, t);
  t = map_1_0(m_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm g_44 (ATerm t)
  {
    ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
    d_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_44 = ATgetFirst((ATermList) t);
        f_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_22 = NULL,p_22 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(d_44);
          m_22 = t;
          t = e_44;
          t = f_88(t);
          p_22 = t;
          t = (ATerm) ATinsert(CheckATermList(f_44), p_22);
          n_7 = t;
          t = SSLsetAnnotations(n_7, m_22);
          ;
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          {
            ATerm a_23 = NULL,e_23 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(d_44);
            a_23 = t;
            t = f_44;
            t = g_44(t);
            e_23 = t;
            t = (ATerm) ATinsert(CheckATermList(e_23), e_44);
            o_7 = t;
            t = SSLsetAnnotations(o_7, a_23);
          }
        }
    }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_18 = ATgetFirst((ATermList) t);
                ATerm q_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_44;
          }
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        t = (ATerm) ATinsert(ATempty, k_44);
      }
    l_44 = t;
    t = term_u_14;
    m_44 = t;
    t = SSL_printnl(m_44, l_44);
    t = k_44;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm p_4 (ATerm g_48, ATerm h_48, ATerm t)
{
  t = SSL_strcat(g_48, h_48);
  return(t);
}
ATerm debug_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  q_44 = t;
  t = s_103(t);
  r_44 = t;
  t = term_h_16;
  s_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_44), r_44);
  t_44 = t;
  t = SSL_printnl(s_44, t_44);
  t = q_44;
  return(t);
}
ATerm map_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm i_45 (ATerm t)
  {
    ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
    f_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_45;
      }
    else
      {
        ATerm m_23 = NULL,p_23 = NULL,q_23 = NULL,t_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_45 = ATgetFirst((ATermList) t);
            h_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_45);
        m_23 = t;
        t = g_45;
        t = v_87(t);
        p_23 = t;
        t = h_45;
        t = i_45(t);
        q_23 = t;
        t = (ATerm) ATinsert(CheckATermList(q_23), p_23);
        t_13 = t;
        t = SSLsetAnnotations(t_13, m_23);
      }
    return(t);
  }
  t = i_45(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_45 = NULL;
      q_45 = t;
      t = SSL_is_string(q_45);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_5, t);
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = w_18;
            {
              ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
              w_45 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_45 = ATgetArgument(t, 0);
                  t = x_45;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_45 = ATgetArgument(t, 0);
                      t = x_45;
                      {
                        ATerm z_18 = t;
                        int c_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_19);
                          }
                        else
                          {
                            t = z_18;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_46 = NULL,d_46 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_45 = ATgetArgument(t, 0);
                          y_45 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_45;
                      t = eval_config_0_0(t);
                      c_46 = t;
                      t = y_45;
                      t = eval_config_0_0(t);
                      d_46 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
                      t = p_4(c_46, d_46, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm n_41, ATerm o_41, ATerm t)
{
  t = SSL_table_get(n_41, o_41);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  h_46 = t;
  t = term_f_17;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, h_46);
  t = q_4(i_46, h_46, t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_46 = NULL,k_46 = NULL;
        t = eval_config_0_0(t);
        j_46 = t;
        t = term_f_17;
        k_46 = t;
        t = SSL_table_put(k_46, h_46, j_46);
        t = j_46;
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  t = term_f_19;
  n_46 = t;
  t = term_g_16;
  o_46 = t;
  t = term_g_19;
  t = t_4(n_46, o_46, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  t = term_f_19;
  r_46 = t;
  t = term_g_16;
  s_46 = t;
  t = term_g_19;
  t = t_4(r_46, s_46, t);
  t = term_i_19;
  p_46 = t;
  t = term_g_16;
  q_46 = t;
  t = term_k_19;
  t = t_4(p_46, q_46, t);
  t = term_l_19;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, w_5, x_5, t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      t = Option_3_0(y_5, z_5, a_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,c_47 = NULL,d_47 = NULL,v_13 = NULL;
  x_46 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_19;
        t = x_109(t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
      }
    t = x_46;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_46 = ATgetFirst((ATermList) t);
        a_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_46);
    y_46 = t;
    t = term_p_17;
    d_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_17, z_46);
    t = t_4(d_47, z_46, t);
    t = a_47;
    {
      ATerm n_47 (ATerm t)
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_47 = NULL;
                g_47 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_47;
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                t = x_109(t);
                t = Cons_2_0(_id, n_47, t);
              }
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm j_47 = NULL,k_47 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_47 = ATgetFirst((ATermList) t);
                  k_47 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_47), (ATerm) ATmakeAppl(sym_Undefined_1, j_47));
            }
          }
        return(t);
      }
      t = n_47(t);
      c_47 = t;
      t = (ATerm) ATinsert(CheckATermList(c_47), (ATerm) ATmakeAppl(sym_Program_1, z_46));
      v_13 = t;
      t = SSLsetAnnotations(v_13, y_46);
    }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "--help"))
    {
      t = z_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_47;
        }
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  t = term_e_18;
  a_48 = t;
  t = term_g_16;
  b_48 = t;
  t = term_w_19;
  t = t_4(a_48, b_48, t);
  t = term_x_19;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_109 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  u_47 = t;
  t = term_g_17;
  w_47 = t;
  t = term_h_17;
  x_47 = t;
  t = (ATerm) ATempty;
  y_47 = t;
  t = SSL_table_put(w_47, x_47, y_47);
  t = u_47;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_109(t);
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_6, g_6, h_6, t);
                ;
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_6, t);
    {
      ATerm d_20 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_48 = NULL;
          k_48 = t;
          {
            ATerm f_20 = t;
            int g_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_24 = NULL;
                t = k_48;
                {
                  ATerm h_20 = t;
                  int i_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_20);
                    }
                  else
                    {
                      t = h_20;
                      t = fetch_1_0(i_6, t);
                    }
                  t = k_48;
                  t = default_system_usage_0_0(t);
                  t = term_s_16;
                  i_24 = t;
                  t = SSL_exit(i_24);
                }
                ;
                LocalPopChoice(g_20);
              }
            else
              {
                t = f_20;
                {
                  ATerm m_24 = NULL;
                  t = term_f_19;
                  t = get_config_0_0(t);
                  t = k_48;
                  t = default_system_about_0_0(t);
                  t = term_s_16;
                  m_24 = t;
                  t = SSL_exit(m_24);
                }
              }
          }
          ;
          LocalPopChoice(e_20);
        }
      else
        {
          t = d_20;
          {
            ATerm j_20 = t;
            int k_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
                ATerm j_6 (ATerm t)
                {
                  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,e_14 = NULL;
                  q_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_48);
                  o_48 = t;
                  t = p_48;
                  if(((s_47 != NULL) && (s_47 != t)))
                    _fail(t);
                  else
                    s_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_48);
                  e_14 = t;
                  t = SSLsetAnnotations(e_14, o_48);
                  return(t);
                }
                t = fetch_1_0(j_6, t);
                t = term_h_16;
                m_48 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_47)), term_m_20);
                n_48 = t;
                t = SSL_printnl(m_48, n_48);
                t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_47)), term_m_20));
                t = default_system_usage_0_0(t);
                t = term_l_16;
                l_48 = t;
                t = SSL_exit(l_48);
                ;
                LocalPopChoice(k_20);
              }
            else
              {
                t = j_20;
              }
          }
        }
      t_47 = t;
      t = term_g_17;
      v_47 = t;
      t = SSL_table_destroy(v_47);
      t = t_47;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  t = parse_options_1_0(w_107, t);
  v_48 = t;
  t = term_n_20;
  y_48 = t;
  t = SSL_table_create(y_48);
  t = term_n_20;
  w_48 = t;
  t = term_o_20;
  x_48 = t;
  t = SSL_table_put(w_48, x_48, v_48);
  t = v_48;
  t = y_107(t);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_107, t);
        ;
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
              t = z_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_20);
            }
          else
            {
              t = r_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_6, p_6, r_6, t);
                  ;
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  {
                    ATerm z_20 = t;
                    int a_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(a_21);
                      }
                    else
                      {
                        t = z_20;
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
ATerm m_6 (ATerm t)
{
  t = input_1_0(v_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL;
  t = term_z_14;
  a_49 = t;
  t = term_g_16;
  b_49 = t;
  t = term_b_21;
  t = t_4(a_49, b_49, t);
  t = term_c_21;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = output_1_0(w_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,q_16 = NULL,n_16 = NULL;
  k_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  d_49 = t;
  t = e_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_49 = ATgetFirst((ATermList) t);
      h_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_49);
  f_49 = t;
  t = h_49;
  t = Cons_2_0(x_6, y_6, t);
  i_49 = t;
  t = (ATerm) ATinsert(CheckATermList(i_49), g_49);
  n_16 = t;
  t = SSLsetAnnotations(n_16, f_49);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_49);
  q_16 = t;
  t = SSLsetAnnotations(q_16, d_49);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,n_14 = NULL;
  o_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_49);
  l_49 = t;
  t = m_49;
  t = desugar_spec_0_0(t);
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, n_49);
  n_14 = t;
  t = SSLsetAnnotations(n_14, l_49);
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_6, default_usage_0_0, _id, m_6, t);
  return(t);
}
