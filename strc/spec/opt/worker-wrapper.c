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
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Op_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_v_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
void init_constant_terms (void)
{
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_10, (ATerm) ATempty);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_x_12);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_a_14);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_x_12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_x_12);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_x_12);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_x_12);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm m_4 (ATerm u_83 (ATerm), ATerm h_25, ATerm g_25, ATerm);
ATerm genzip_4_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm f_0 (ATerm);
ATerm q_4 (ATerm t_559, ATerm y_559, ATerm l_52, ATerm);
ATerm while_not_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm b_7 (ATerm l_3, ATerm m_3, ATerm o_3, ATerm);
ATerm u_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm w_4 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm n_25, ATerm m_25, ATerm);
ATerm x_4 (ATerm z_83 (ATerm), ATerm j_25, ATerm i_25, ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm free_vars_3_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm worker_wrapper_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_25 (ATerm s_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm worker_wrapper_spec_0_0 (ATerm);
ATerm y_4 (ATerm k_38, ATerm l_38, ATerm);
ATerm z_4 (ATerm y_41, ATerm z_41, ATerm);
ATerm b_5 (ATerm s_92 (ATerm), ATerm d_404, ATerm c_42, ATerm);
ATerm a_5 (ATerm u_41, ATerm v_41, ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm y_27 (ATerm r_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_5 (ATerm a_42, ATerm);
ATerm d_5 (ATerm m_38, ATerm n_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_30 (ATerm q_28, ATerm);
ATerm i_30 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm);
ATerm j_30 (ATerm h_29, ATerm i_29, ATerm j_29, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_5 (ATerm b_43, ATerm c_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm p_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_5 (ATerm z_47, ATerm a_48, ATerm y_47, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_5 (ATerm k_35, ATerm l_35, ATerm);
ATerm foldr_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm need_help_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_5 (ATerm a_33, ATerm b_33, ATerm);
ATerm debug_1_0 (ATerm q_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm i_5 (ATerm q_49, ATerm r_49, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_98 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm parse_options_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm f_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm m_4 (ATerm u_83 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm w_0 = NULL,z_0 = NULL,b_1 = NULL;
    w_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_0 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                ATerm a_0 (ATerm t)
                {
                  t = g_25;
                  return(t);
                }
                t = w_4(u_83, a_0, z_0, b_1, t);
                t = e_1(t);
              }
              ;
              LocalPopChoice(j_7);
            }
          else
            {
              t = i_7;
              {
                ATerm o_0 = NULL,y_0 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(w_0);
                o_0 = t;
                t = b_1;
                t = e_1(t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), z_0);
                e_0 = t;
                t = SSLsetAnnotations(e_0, o_0);
              }
            }
        }
      }
    return(t);
  }
  t = h_25;
  t = e_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_81(t);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        {
          ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,m_1 = NULL,o_1 = NULL,r_1 = NULL,n_0 = NULL;
          t = z_81(t);
          r_1 = t;
          if(match_cons(t, sym__2))
            {
              h_1 = ATgetArgument(t, 0);
              i_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_1);
          g_1 = t;
          t = h_1;
          t = b_82(t);
          m_1 = t;
          t = i_1;
          t = s_1(t);
          o_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_1, o_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, g_1);
          t = a_82(t);
        }
      }
    return(t);
  }
  t = s_1(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(((ATgetType(o_7) != AT_LIST) || !(ATisEmpty(o_7))))
        _fail(t);
      {
        ATerm u_7 = ATgetArgument(t, 1);
        if(((ATgetType(u_7) != AT_LIST) || !(ATisEmpty(u_7))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
        {
          h_2 = ATgetFirst((ATermList) v_7);
          j_2 = (ATerm) ATgetNext((ATermList) v_7);
        }
      else
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            k_2 = ATgetFirst((ATermList) w_7);
            l_2 = (ATerm) ATgetNext((ATermList) w_7);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_2, k_2), (ATerm) ATmakeAppl(sym__2, j_2, l_2));
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_2), m_2);
  return(t);
}
ATerm q_4 (ATerm t_559, ATerm y_559, ATerm l_52, ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL;
  t = SSL_explode_term(y_559);
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_559);
  if(match_cons(t, sym__2))
    {
      if((a_2 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_2, d_2);
  t = genzip_4_0(b_0, c_0, f_0, _id, t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, l_52);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm z_7 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_73(t);
        ;
        LocalPopChoice(b_8);
      }
    else
      {
        t = z_7;
        t = w_73(t);
        t = q_2(t);
      }
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm for_3_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  t = y_73(t);
  t = while_not_2_0(z_73, a_74, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_3);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,r_0 = NULL;
  h_3 = t;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  e_3 = t;
  t = g_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, e_3);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,r_4 = NULL,v_4 = NULL,k_5 = NULL;
  n_4 = t;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_4 = ATgetFirst((ATermList) t);
      k_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_7(o_4, r_4, n_4, t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_4), v_4), k_5);
          }
      }
    }
  else
    {
      t = b_7(o_4, r_4, n_4, t);
    }
  return(t);
}
ATerm b_7 (ATerm l_3, ATerm m_3, ATerm o_3, ATerm t)
{
  ATerm p_3 = NULL,t_3 = NULL,s_0 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL;
  t = SSLgetAnnotations(o_3);
  p_3 = t;
  t = m_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_3;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_3;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = a_4;
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = m_3;
        t = q_4(x_3, y_3, a_4, t);
      }
    t_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_3, t_3);
    s_0 = t;
    t = SSLsetAnnotations(s_0, p_3);
  }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      if((a_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_0, q_0, t_0, t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = g_8;
      {
        ATerm r_5 = NULL,y_5 = NULL,j_6 = NULL;
        r_5 = t;
        if(match_cons(t, sym__2))
          {
            y_5 = ATgetArgument(t, 0);
            j_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_5;
        t = m_4(u_0, y_5, j_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  z_10 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_11 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      {
        ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(z_10);
        t_1 = t;
        t = a_11;
        t = k_102(t);
        w_1 = t;
        t = v_10;
        t = i_102(t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_1, x_1);
        v_0 = t;
        t = SSLsetAnnotations(v_0, t_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          a_11 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
          x_10 = ATgetArgument(t, 2);
          y_10 = ATgetArgument(t, 3);
          {
            ATerm u_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(z_10);
            u_2 = t;
            t = a_11;
            t = k_102(t);
            z_2 = t;
            t = v_10;
            t = k_102(t);
            a_3 = t;
            t = x_10;
            t = k_102(t);
            b_3 = t;
            t = y_10;
            t = i_102(t);
            c_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_2, a_3, b_3, c_3);
            f_1 = t;
            t = SSLsetAnnotations(f_1, u_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              a_11 = ATgetArgument(t, 0);
              v_10 = ATgetArgument(t, 1);
              x_10 = ATgetArgument(t, 2);
              y_10 = ATgetArgument(t, 3);
              {
                ATerm l_4 = NULL,f_5 = NULL,g_5 = NULL,m_5 = NULL,n_5 = NULL,w_6 = NULL;
                t = SSLgetAnnotations(z_10);
                l_4 = t;
                t = a_11;
                t = k_102(t);
                f_5 = t;
                t = v_10;
                t = k_102(t);
                g_5 = t;
                t = x_10;
                t = k_102(t);
                m_5 = t;
                t = y_10;
                t = i_102(t);
                n_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_5, g_5, m_5, n_5);
                w_6 = t;
                t = SSLsetAnnotations(w_6, l_4);
              }
            }
          else
            {
              ATerm b_6 = NULL,d_6 = NULL,x_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_10);
              b_6 = t;
              t = a_11;
              t = i_102(t);
              d_6 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_6);
              x_6 = t;
              t = SSLsetAnnotations(x_6, b_6);
            }
        }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm l_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_11);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm n_11 = NULL,o_11 = NULL,r_11 = NULL,t_11 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_11 = ATgetArgument(t, 0);
            t = n_11;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_11 = ATgetArgument(t, 0);
                o_11 = ATgetArgument(t, 1);
                r_11 = ATgetArgument(t, 2);
                t_11 = ATgetArgument(t, 3);
                t = r_11;
                t = map_1_0(c_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                    r_11 = ATgetArgument(t, 2);
                    t_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_11;
                t = map_1_0(d_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm l_12 = NULL;
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_12 = ATgetArgument(t, 0);
          {
            ATerm o_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_8);
      t = l_12;
    }
  else
    {
      t = m_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_12;
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm m_13 = NULL;
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_13 = ATgetArgument(t, 0);
          {
            ATerm t_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_8);
      t = m_13;
    }
  else
    {
      t = p_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_13;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(x_0, a_1, tboundin_3_0, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm g_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_14);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm u_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = u_8;
      {
        ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_14 = ATgetArgument(t, 0);
            t = o_14;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_14 = ATgetArgument(t, 0);
                p_14 = ATgetArgument(t, 1);
                q_14 = ATgetArgument(t, 2);
                r_14 = ATgetArgument(t, 3);
                t = q_14;
                t = map_1_0(l_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_14 = ATgetArgument(t, 0);
                    p_14 = ATgetArgument(t, 1);
                    q_14 = ATgetArgument(t, 2);
                    r_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_14;
                t = map_1_0(n_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm z_8 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm f_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_9);
      t = d_15;
    }
  else
    {
      t = z_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_15;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_15 = NULL;
  ATerm h_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_15 = ATgetArgument(t, 0);
          {
            ATerm m_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_9);
      t = t_15;
    }
  else
    {
      t = h_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_15;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_13 = NULL,d_14 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_14 = ATgetArgument(t, 0);
      t = d_14;
      if(match_cons(t, sym_Rule_3))
        {
          z_13 = ATgetArgument(t, 0);
          {
            ATerm o_9 = ATgetArgument(t, 1);
          }
          {
            ATerm r_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_13;
      t = free_vars_3_0(j_1, k_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_14 = ATgetArgument(t, 0);
          {
            ATerm u_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_14;
    }
  return(t);
}
ATerm w_4 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm n_25, ATerm m_25, ATerm t)
{
  t = d_84(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm d_16 = NULL;
      d_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_25, d_16);
      t = c_84(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = m_25;
  }
  return(t);
}
ATerm x_4 (ATerm z_83 (ATerm), ATerm j_25, ATerm i_25, ATerm t)
{
  ATerm d_17 (ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
    s_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_16 = ATgetFirst((ATermList) t);
            u_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_16;
              {
                ATerm q_1 (ATerm t)
                {
                  t = i_25;
                  return(t);
                }
                t = w_4(z_83, q_1, t_16, u_16, t);
                t = d_17(t);
              }
              ;
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              {
                ATerm l_6 = NULL,o_6 = NULL,l_7 = NULL;
                t = SSLgetAnnotations(s_16);
                l_6 = t;
                t = u_16;
                t = d_17(t);
                o_6 = t;
                t = (ATerm) ATinsert(CheckATermList(o_6), t_16);
                l_7 = t;
                t = SSLsetAnnotations(l_7, l_6);
              }
            }
        }
      }
    return(t);
  }
  t = j_25;
  t = d_17(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(b_2, c_7, d_7, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      if((e_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(i_2, r_7, s_7, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      if((a_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_101(t);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_17 = NULL,j_17 = NULL,t_6 = NULL,v_6 = NULL;
              i_17 = t;
              t = h_101(t);
              j_17 = t;
              t = i_17;
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm o_17 = NULL;
                  t = w_18(t);
                  o_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_17, j_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_101(u_1, w_18, v_1, t);
                v_6 = t;
                t = SSL_explode_term(v_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_10 = ATgetArgument(t, 0);
                    t_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_6;
                t = foldr_3_0(y_1, z_1, _id, t);
              }
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
              {
                ATerm g_7 = NULL,h_7 = NULL;
                h_7 = t;
                t = SSL_explode_term(h_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_10 = ATgetArgument(t, 0);
                    g_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_7;
                t = foldr_3_0(e_2, g_2, w_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm n_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_9);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm p_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_9 = ATgetArgument(t, 0);
            t = p_9;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_9 = ATgetArgument(t, 0);
                q_9 = ATgetArgument(t, 1);
                s_9 = ATgetArgument(t, 2);
                t_9 = ATgetArgument(t, 3);
                t = s_9;
                t = map_1_0(r_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_9 = ATgetArgument(t, 0);
                    q_9 = ATgetArgument(t, 1);
                    s_9 = ATgetArgument(t, 2);
                    t_9 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_9;
                t = map_1_0(s_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_10 = ATgetArgument(t, 0);
          {
            ATerm h_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_10);
      t = l_10;
    }
  else
    {
      t = f_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_10;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_11 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_10);
      t = g_11;
    }
  else
    {
      t = i_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_11;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_11, term_o_10);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm k_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      k_11 = ATgetArgument(t, 0);
      {
        ATerm p_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_11), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_11 = ATgetArgument(t, 0);
      {
        ATerm q_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,k_22 = NULL,m_22 = NULL,p_22 = NULL,r_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
      m_22 = ATgetArgument(t, 2);
      p_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_22;
  if(match_cons(t, sym_Seq_2))
    {
      r_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      t = r_22;
      if(match_cons(t, sym_Match_1))
        {
          e_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, g_22, k_22, m_22, (ATerm) ATmakeAppl(sym_ScopeDefault_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_22), v_22)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm x_8 = NULL,y_8 = NULL,a_9 = NULL,e_9 = NULL,g_9 = NULL,i_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          r_22 = ATgetArgument(t, 0);
          v_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_22;
      if(match_cons(t, sym_Seq_2))
        {
          w_22 = ATgetArgument(t, 0);
          y_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_22;
      if(match_cons(t, sym_Match_1))
        {
          x_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_22;
      if(match_cons(t, sym_Op_2))
        {
          ATerm r_10 = ATgetArgument(t, 0);
          ATerm s_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_22;
      t = free_vars_3_0(o_2, p_2, tboundin_3_0, t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_22, y_8);
      t = diff_0_0(t);
      x_8 = t;
      t = y_8;
      t = map_1_0(t_2, t);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, a_9);
      t = conc_0_0(t);
      i_9 = t;
      t = new_0_0(t);
      e_9 = t;
      t = k_22;
      t = map_1_0(v_2, t);
      g_9 = t;
      t = i_9;
      t = map_1_0(w_2, t);
      j_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, e_9, k_22, i_9, (ATerm) ATmakeAppl(sym_Scope_2, x_8, y_22))), (ATerm) ATmakeAppl(sym_SDefT_4, g_22, k_22, m_22, (ATerm) ATmakeAppl(sym_Scope_2, y_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_22), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_9), g_9, j_9)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm m_24 (ATerm t)
  {
    ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
    l_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_24 = ATgetFirst((ATermList) t);
        k_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_12 = NULL,p_12 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(l_24);
          h_12 = t;
          t = k_24;
          t = m_24(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(p_12), j_24);
          n_7 = t;
          t = SSLsetAnnotations(n_7, h_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_24;
        t = l_80(t);
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_23 = NULL,l_23 = NULL,m_23 = NULL;
  j_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_23;
    }
  else
    {
      ATerm x_2 (ATerm t)
      {
        t = not_null(m_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_23 = ATgetFirst((ATermList) t);
          if(((m_23 != NULL) && (m_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_23;
      t = at_end_1_0(x_2, t);
    }
  return(t);
}
ATerm e_25 (ATerm s_24, ATerm t)
{
  ATerm t_24 = NULL;
  t = SSL_explode_term(s_24);
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  z_24 = t;
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
      {
        ATerm u_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              t = y_24;
              return(t);
            }
            t = x_24;
            t = at_end_1_0(y_2, t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = u_10;
            t = e_25(z_24, t);
          }
      }
    }
  else
    {
      t = e_25(z_24, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,p_25 = NULL,q_25 = NULL;
  l_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_25;
      t = a_86(t);
    }
  else
    {
      ATerm t_25 = NULL,u_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_25 = ATgetFirst((ATermList) t);
          q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_25;
      t = c_86(t);
      t_25 = t;
      t = q_25;
      t = foldr_3_0(a_86, b_86, c_86, t);
      u_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_25, u_25);
      t = b_86(t);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,n_26 = NULL,p_7 = NULL;
  n_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_26);
  g_26 = t;
  t = h_26;
  t = foldr_3_0(_id, conc_0_0, k_3, t);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_26);
  p_7 = t;
  t = SSLsetAnnotations(p_7, g_26);
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm p_26 = NULL;
        p_26 = t;
        t = (ATerm) ATinsert(ATempty, p_26);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,t_7 = NULL,q_7 = NULL;
  f_26 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  w_25 = t;
  t = x_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_26 = ATgetFirst((ATermList) t);
      c_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_25);
  a_26 = t;
  t = c_26;
  t = Cons_2_0(i_3, j_3, t);
  d_26 = t;
  t = (ATerm) ATinsert(CheckATermList(d_26), b_26);
  q_7 = t;
  t = SSLsetAnnotations(q_7, a_26);
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_26);
  t_7 = t;
  t = SSLsetAnnotations(t_7, w_25);
  return(t);
}
ATerm y_4 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_fputc(k_38, l_38);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
ATerm z_4 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_write_term_to_stream_text(y_41, z_41);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_26);
  return(t);
}
ATerm b_5 (ATerm s_92 (ATerm), ATerm d_404, ATerm c_42, ATerm t)
{
  ATerm u_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_404, term_d_11);
  t = open_stream_0_0(t);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, c_42);
  t = s_92(t);
  t = fclose_0_0(t);
  t = c_42;
  return(t);
}
ATerm a_5 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_write_term_to_stream_baf(u_41, v_41);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if(match_cons(e_11, sym_Stream_1))
        {
          y_26 = ATgetArgument(e_11, 0);
        }
      else
        _fail(t);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(y_26, z_26, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if(match_cons(f_11, sym_Stream_1))
        {
          f_27 = ATgetArgument(f_11, 0);
        }
      else
        _fail(t);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(f_27, g_27, t);
  a_27 = t;
  t = term_h_11;
  b_27 = t;
  t = a_27;
  if(match_cons(t, sym_Stream_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, a_27);
  t = y_4(b_27, e_27, t);
  return(t);
}
ATerm output_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  t = b_97(t);
  x_26 = t;
  {
    ATerm i_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = i_11;
        t = term_s_11;
      }
    w_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_26, x_26);
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_11;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_26, x_26);
          LocalPopChoice(v_11);
          if(match_cons(t, sym__2))
            {
              ATerm x_11 = ATgetArgument(t, 0);
              ATerm y_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5(n_3, w_26, x_26, t);
        }
      else
        {
          t = u_11;
          if(match_cons(t, sym__2))
            {
              ATerm z_11 = ATgetArgument(t, 0);
              ATerm a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5(q_3, w_26, x_26, t);
        }
    }
  }
  return(t);
}
ATerm y_27 (ATerm r_27, ATerm t)
{
  t = SSL_fclose(r_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  w_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_27 = ATgetArgument(t, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_27);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = y_27(w_27, t);
          }
      }
    }
  else
    {
      t = y_27(w_27, t);
    }
  return(t);
}
ATerm c_5 (ATerm a_42, ATerm t)
{
  t = SSL_read_term_from_stream(a_42);
  return(t);
}
ATerm d_5 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_fopen(m_38, n_38);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_28 = NULL;
  t = SSL_stdin_stream();
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_28 = NULL;
  t = SSL_stdout_stream();
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_28 = NULL;
  t = SSL_stderr_stream();
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_28);
  return(t);
}
ATerm h_30 (ATerm q_28, ATerm t)
{
  ATerm t_28 = NULL;
  t = SSL_explode_term(q_28);
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            t_28 = ATgetFirst((ATermList) e_12);
            {
              ATerm f_12 = (ATerm) ATgetNext((ATermList) e_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm i_30 (ATerm w_28, ATerm x_28, ATerm y_28, ATerm t)
{
  ATerm z_28 = NULL,b_29 = NULL,c_29 = NULL,f_29 = NULL,x_7 = NULL;
  t = SSLgetAnnotations(y_28);
  c_29 = t;
  t = w_28;
  if(match_cons(t, sym_Path_1))
    {
      f_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_29, x_28);
  x_7 = t;
  t = SSLsetAnnotations(x_7, c_29);
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(z_28, b_29, t);
  return(t);
}
ATerm j_30 (ATerm h_29, ATerm i_29, ATerm j_29, ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,o_29 = NULL,t_29 = NULL,y_7 = NULL;
  t = SSLgetAnnotations(j_29);
  o_29 = t;
  t = SSL_is_string(h_29);
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_29, i_29);
  y_7 = t;
  t = SSLsetAnnotations(y_7, o_29);
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(k_29, l_29, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_29 = NULL,b_30 = NULL,e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      ATerm i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_29 = t;
  if(match_cons(t, sym__2))
    {
      b_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_30(y_29, t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm m_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_30(b_30, e_30, y_29, t);
                  ;
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = m_12;
                  t = j_30(b_30, e_30, y_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_30(y_29, t);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_30 = NULL,n_30 = NULL,o_30 = NULL;
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL;
      p_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_30, term_s_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = debug_1_0(r_3, t);
      _fail(t);
    }
  n_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(o_30, t);
  k_30 = t;
  t = n_30;
  t = fclose_0_0(t);
  t = k_30;
  return(t);
}
ATerm input_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = term_w_12;
    }
  t = ReadFromFile_0_0(t);
  t = c_97(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  x_30 = t;
  t = term_x_12;
  t = whoami_0_0(t);
  y_30 = t;
  t = term_y_12;
  a_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_13), y_30), term_z_12);
  b_31 = t;
  t = SSL_printnl(a_31, b_31);
  t = term_b_13;
  z_30 = t;
  t = SSL_exit(z_30);
  t = x_30;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  if(match_string(t, "-k"))
    {
      t = d_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_31;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  t = SSL_string_to_int(e_31);
  f_31 = t;
  t = term_c_13;
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, f_31);
  t = l_5(g_31, f_31, t);
  t = e_31;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, u_3, v_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  if(match_string(t, "-S"))
    {
      t = i_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_31;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  t = term_e_13;
  j_31 = t;
  t = term_f_13;
  k_31 = t;
  t = term_i_13;
  t = l_5(j_31, k_31, t);
  t = term_j_13;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  t = SSL_string_to_int(l_31);
  m_31 = t;
  t = term_e_13;
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, m_31);
  t = l_5(n_31, m_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_31);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  t = term_p_13;
  o_31 = t;
  t = term_x_12;
  p_31 = t;
  t = term_q_13;
  t = l_5(o_31, p_31, t);
  t = term_r_13;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, c_4, t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_4, e_4, f_4, t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = Option_3_0(g_4, h_4, i_4, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm q_31 = NULL;
  t = term_x_13;
  q_31 = t;
  t = SSL_table_put(q_31, b_43, c_43);
  t = (ATerm) ATmakeAppl(sym__3, term_x_13, b_43, c_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
      t = term_x_12;
      t = h_0(t);
      v_31 = t;
      t = term_y_13;
      w_31 = t;
      t = term_a_14;
      x_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_a_14, v_31);
      t = j_5(w_31, x_31, v_31, t);
      _fail(t);
    }
  else
    {
      ATerm a_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_31 = ATgetFirst((ATermList) t);
          u_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_31;
      t = d_0(t);
      t = term_x_12;
      t = g_0(t);
      a_32 = t;
      t = (ATerm) ATinsert(CheckATermList(u_31), a_32);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "-o"))
    {
      t = e_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_32;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  t = term_q_11;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, f_32);
  t = l_5(g_32, f_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_32);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, p_4, t);
  return(t);
}
ATerm j_5 (ATerm z_47, ATerm a_48, ATerm y_47, ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
  {
    ATerm c_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            ATerm h_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
        t = i_5(z_47, a_48, t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATempty;
      }
    j_32 = t;
    t = (ATerm) ATinsert(CheckATermList(j_32), y_47);
    k_32 = t;
    t = SSL_table_put(z_47, a_48, k_32);
    t = i_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
      t = term_x_12;
      t = m_0(t);
      v_32 = t;
      t = term_y_13;
      w_32 = t;
      t = term_a_14;
      x_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_a_14, v_32);
      t = j_5(w_32, x_32, v_32, t);
      _fail(t);
    }
  else
    {
      ATerm d_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_32 = ATgetFirst((ATermList) t);
          s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_32;
      t = k_0(t);
      t = t_32;
      t = l_0(t);
      d_33 = t;
      t = (ATerm) ATinsert(CheckATermList(u_32), d_33);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-i"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm g_33 = NULL,j_33 = NULL;
  g_33 = t;
  t = term_v_12;
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, g_33);
  t = l_5(j_33, g_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_33);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_12;
  t = whoami_0_0(t);
  k_33 = t;
  t = term_y_12;
  m_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_14), k_33);
  n_33 = t;
  t = SSL_printnl(m_33, n_33);
  t = term_b_13;
  l_33 = t;
  t = SSL_exit(l_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_5 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_35, l_35);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(k_35, l_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_33;
      t = y_85(t);
    }
  else
    {
      ATerm u_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_33 = ATgetFirst((ATermList) t);
          r_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_33;
      t = foldr_2_0(y_85, z_85, t);
      u_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_33, u_33);
      t = z_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(k_13, l_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_33 = NULL,g_13 = NULL,h_13 = NULL;
  t = times_0_0(t);
  h_13 = t;
  t = SSL_explode_term(h_13);
  if(match_cons(t, sym__2))
    {
      ATerm s_14 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13;
  t = foldr_2_0(o_5, p_5, t);
  x_33 = t;
  t = SSL_TicksToSeconds(x_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_34;
        if((j_34 != t))
          {
            _fail(t);
          }
        t = i_34;
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_34, k_34);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = SSL_gtr(j_34, k_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_34 = NULL;
        t = term_e_13;
        t = get_config_0_0(t);
        q_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_34, term_b_13);
        t = geq_0_0(t);
        t = o_34;
        t = c_94(t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = o_34;
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL;
  t = run_time_0_0(t);
  s_34 = t;
  t = term_x_12;
  t = whoami_0_0(t);
  t_34 = t;
  t = term_y_12;
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), s_34), term_z_14), t_34);
  w_34 = t;
  t = SSL_printnl(v_34, w_34);
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), s_34), term_z_14), t_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_13;
  x_34 = t;
  t = SSL_exit(x_34);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_35 = ATgetArgument(t, 0);
          {
            ATerm i_14 = NULL,h_8 = NULL;
            t = SSLgetAnnotations(g_35);
            i_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_35);
            h_8 = t;
            t = SSLsetAnnotations(h_8, i_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm b_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = b_15;
      t = fetch_1_0(s_5, t);
    }
  t = s_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,m_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_35 = ATgetFirst((ATermList) t);
      m_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_35 = NULL,r_35 = NULL;
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_35)), not_null(r_35));
          return(t);
        }
        t = m_35;
        t = j_0(t);
        if(((q_35 != NULL) && (q_35 != t)))
          _fail(t);
        else
          q_35 = t;
        t = j_35;
        t = i_0(t);
        if(((r_35 != NULL) && (r_35 != t)))
          _fail(t);
        else
          r_35 = t;
        t = m_35;
        t = reverse_acc_2_0(i_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_12;
      t = j_0(t);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,j_8 = NULL;
  x_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_35);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_35);
  j_8 = t;
  t = SSLsetAnnotations(j_8, v_35);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_35), term_g_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = fetch_1_0(u_5, t);
    }
  t = term_j_15;
  t = echo_0_0(t);
  t = term_y_13;
  t_35 = t;
  t = term_a_14;
  u_35 = t;
  t = term_k_15;
  t = i_5(t_35, u_35, t);
  t = reverse_acc_2_0(_id, v_5, t);
  t = map_1_0(w_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm x_36 (ATerm t)
  {
    ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
    u_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_36 = ATgetFirst((ATermList) t);
        w_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL,l_15 = NULL,r_8 = NULL;
          t = SSLgetAnnotations(u_36);
          c_15 = t;
          t = v_36;
          t = f_80(t);
          l_15 = t;
          t = (ATerm) ATinsert(CheckATermList(w_36), l_15);
          r_8 = t;
          t = SSLsetAnnotations(r_8, c_15);
          ;
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          {
            ATerm y_15 = NULL,e_16 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(u_36);
            y_15 = t;
            t = w_36;
            t = x_36(t);
            e_16 = t;
            t = (ATerm) ATinsert(CheckATermList(e_16), v_36);
            s_8 = t;
            t = SSLsetAnnotations(s_8, y_15);
          }
        }
    }
    return(t);
  }
  t = x_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_15 = ATgetFirst((ATermList) t);
                ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_37;
          }
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATinsert(ATempty, b_37);
      }
    c_37 = t;
    t = term_s_11;
    d_37 = t;
    t = SSL_printnl(d_37, c_37);
    t = b_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_5 (ATerm a_33, ATerm b_33, ATerm t)
{
  t = SSL_strcat(a_33, b_33);
  return(t);
}
ATerm debug_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  h_37 = t;
  t = q_92(t);
  i_37 = t;
  t = term_y_12;
  j_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_37), i_37);
  k_37 = t;
  t = SSL_printnl(j_37, k_37);
  t = h_37;
  return(t);
}
ATerm map_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm z_37 (ATerm t)
  {
    ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
    w_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_37;
      }
    else
      {
        ATerm x_16 = NULL,a_17 = NULL,h_17 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_37 = ATgetFirst((ATermList) t);
            y_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_37);
        x_16 = t;
        t = x_37;
        t = v_79(t);
        a_17 = t;
        t = y_37;
        t = z_37(t);
        h_17 = t;
        t = (ATerm) ATinsert(CheckATermList(h_17), a_17);
        v_8 = t;
        t = SSLsetAnnotations(v_8, x_16);
      }
    return(t);
  }
  t = z_37(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm s_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_15);
    }
  else
    {
      t = s_15;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_38 = NULL;
      h_38 = t;
      t = SSL_is_string(h_38);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_5, t);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
              t_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_38 = ATgetArgument(t, 0);
                  t = u_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_38 = ATgetArgument(t, 0);
                      t = u_38;
                      {
                        ATerm b_16 = t;
                        int c_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_16);
                          }
                        else
                          {
                            t = b_16;
                            t = debug_1_0(z_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_38 = NULL,a_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_38 = ATgetArgument(t, 0);
                          v_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_38;
                      t = eval_config_0_0(t);
                      z_38 = t;
                      t = v_38;
                      t = eval_config_0_0(t);
                      a_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_38, a_39);
                      t = h_5(z_38, a_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm q_49, ATerm r_49, ATerm t)
{
  t = SSL_table_get(q_49, r_49);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  t = term_x_13;
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, e_39);
  t = i_5(f_39, e_39, t);
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_39 = NULL,h_39 = NULL;
        t = eval_config_0_0(t);
        g_39 = t;
        t = term_x_13;
        h_39 = t;
        t = SSL_table_put(h_39, e_39, g_39);
        t = g_39;
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
      }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  t = term_h_16;
  k_39 = t;
  t = term_x_12;
  l_39 = t;
  t = term_i_16;
  t = l_5(k_39, l_39, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
  t = term_h_16;
  o_39 = t;
  t = term_x_12;
  p_39 = t;
  t = term_i_16;
  t = l_5(o_39, p_39, t);
  t = term_k_16;
  m_39 = t;
  t = term_x_12;
  n_39 = t;
  t = term_l_16;
  t = l_5(m_39, n_39, t);
  t = term_m_16;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, c_6, e_6, t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      t = Option_3_0(f_6, g_6, h_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,b_9 = NULL;
  v_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_39 = ATgetFirst((ATermList) t);
      s_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_39);
  q_39 = t;
  t = r_39;
  t = h_59(t);
  t_39 = t;
  t = s_39;
  t = i_59(t);
  u_39 = t;
  t = (ATerm) ATinsert(CheckATermList(u_39), t_39);
  b_9 = t;
  t = SSLsetAnnotations(b_9, q_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,f_40 = NULL,g_40 = NULL,d_9 = NULL;
  a_40 = t;
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_16;
        t = v_98(t);
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
      }
    t = a_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_40 = ATgetFirst((ATermList) t);
        d_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_40);
    b_40 = t;
    t = term_l_14;
    g_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_14, c_40);
    t = l_5(g_40, c_40, t);
    t = d_40;
    {
      ATerm q_40 (ATerm t)
      {
        ATerm w_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_16 = t;
            int b_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_40 = NULL;
                j_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_40;
                ;
                LocalPopChoice(b_17);
              }
            else
              {
                t = z_16;
                t = v_98(t);
                t = Cons_2_0(_id, q_40, t);
              }
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = w_16;
            {
              ATerm m_40 = NULL,n_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_40 = ATgetFirst((ATermList) t);
                  n_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_40), (ATerm) ATmakeAppl(sym_Undefined_1, m_40));
            }
          }
        return(t);
      }
      t = q_40(t);
      f_40 = t;
      t = (ATerm) ATinsert(CheckATermList(f_40), (ATerm) ATmakeAppl(sym_Program_1, c_40));
      d_9 = t;
      t = SSLsetAnnotations(d_9, b_40);
    }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  if(match_string(t, "--help"))
    {
      t = c_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_41;
        }
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  t = term_f_15;
  d_41 = t;
  t = term_x_12;
  e_41 = t;
  t = term_c_17;
  t = l_5(d_41, e_41, t);
  t = term_e_17;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  x_40 = t;
  t = term_y_13;
  z_40 = t;
  t = term_a_14;
  a_41 = t;
  t = (ATerm) ATempty;
  b_41 = t;
  t = SSL_table_put(z_40, a_41, b_41);
  t = x_40;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm g_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_98(t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = g_17;
          {
            ATerm l_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_6, m_6, n_6, t);
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = l_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
    {
      ATerm n_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_41 = NULL;
          l_41 = t;
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_18 = NULL;
                t = l_41;
                {
                  ATerm s_17 = t;
                  int t_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_17);
                    }
                  else
                    {
                      t = s_17;
                      t = fetch_1_0(p_6, t);
                    }
                  t = l_41;
                  t = default_system_usage_0_0(t);
                  t = term_f_13;
                  f_18 = t;
                  t = SSL_exit(f_18);
                }
                ;
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                {
                  ATerm j_18 = NULL;
                  t = term_h_16;
                  t = get_config_0_0(t);
                  t = l_41;
                  t = default_system_about_0_0(t);
                  t = term_f_13;
                  j_18 = t;
                  t = SSL_exit(j_18);
                }
              }
          }
          ;
          LocalPopChoice(p_17);
        }
      else
        {
          t = n_17;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
                ATerm q_6 (ATerm t)
                {
                  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,k_9 = NULL;
                  r_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_41);
                  p_41 = t;
                  t = q_41;
                  if(((v_40 != NULL) && (v_40 != t)))
                    _fail(t);
                  else
                    v_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_41);
                  k_9 = t;
                  t = SSLsetAnnotations(k_9, p_41);
                  return(t);
                }
                t = fetch_1_0(q_6, t);
                t = term_y_12;
                n_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_40)), term_w_17);
                o_41 = t;
                t = SSL_printnl(n_41, o_41);
                t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_40)), term_w_17));
                t = default_system_usage_0_0(t);
                t = term_b_13;
                m_41 = t;
                t = SSL_exit(m_41);
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
              }
          }
        }
      w_40 = t;
      t = term_y_13;
      y_40 = t;
      t = SSL_table_destroy(y_40);
      t = w_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  t = parse_options_1_0(u_96, t);
  d_42 = t;
  t = term_x_17;
  g_42 = t;
  t = SSL_table_create(g_42);
  t = term_x_17;
  e_42 = t;
  t = term_y_17;
  f_42 = t;
  t = SSL_table_put(e_42, f_42, d_42);
  t = d_42;
  t = w_96(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_96, t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm i_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_6, y_6, z_6, t);
                  ;
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = i_18;
                  {
                    ATerm l_18 = t;
                    int m_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(m_18);
                      }
                    else
                      {
                        t = l_18;
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
ATerm s_6 (ATerm t)
{
  t = input_1_0(f_7, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  t = term_w_11;
  i_42 = t;
  t = term_x_12;
  j_42 = t;
  t = term_n_18;
  t = l_5(i_42, j_42, t);
  t = term_o_18;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_6, default_usage_0_0, _id, s_6, t);
  return(t);
}
