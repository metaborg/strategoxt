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
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_a_16;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
void init_constant_terms (void)
{
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Sort_2, term_p_10, (ATerm) ATempty);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_c_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_h_14);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_c_13);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_c_13);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_c_13);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_c_13);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm o_4 (ATerm u_83 (ATerm), ATerm h_25, ATerm g_25, ATerm);
ATerm genzip_4_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm f_0 (ATerm);
ATerm s_4 (ATerm c_561, ATerm h_561, ATerm l_52, ATerm);
ATerm while_not_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm b_7 (ATerm i_3, ATerm j_3, ATerm n_3, ATerm);
ATerm u_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm y_4 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm n_25, ATerm m_25, ATerm);
ATerm z_4 (ATerm z_83 (ATerm), ATerm j_25, ATerm i_25, ATerm);
ATerm w_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm k_2 (ATerm);
ATerm free_vars_3_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm worker_wrapper_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_25 (ATerm v_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm worker_wrapper_spec_0_0 (ATerm);
ATerm a_5 (ATerm k_38, ATerm l_38, ATerm);
ATerm b_5 (ATerm y_41, ATerm z_41, ATerm);
ATerm d_5 (ATerm s_92 (ATerm), ATerm m_405, ATerm c_42, ATerm);
ATerm c_5 (ATerm u_41, ATerm v_41, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm h_28 (ATerm u_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_5 (ATerm a_42, ATerm);
ATerm f_5 (ATerm m_38, ATerm n_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_30 (ATerm v_28, ATerm);
ATerm l_30 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm);
ATerm m_30 (ATerm k_29, ATerm l_29, ATerm m_29, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_5 (ATerm b_43, ATerm c_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm l_5 (ATerm z_47, ATerm a_48, ATerm y_47, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_5 (ATerm k_35, ATerm l_35, ATerm);
ATerm foldr_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm q_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm need_help_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_5 (ATerm a_33, ATerm b_33, ATerm);
ATerm debug_1_0 (ATerm q_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm k_5 (ATerm q_49, ATerm r_49, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_98 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm parse_options_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm a_7 (ATerm);
ATerm f_7 (ATerm);
ATerm i_7 (ATerm);
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
ATerm o_4 (ATerm u_83 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm w_0 = NULL,z_0 = NULL,a_1 = NULL;
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
            a_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                ATerm a_0 (ATerm t)
                {
                  t = g_25;
                  return(t);
                }
                t = y_4(u_83, a_0, z_0, a_1, t);
                t = e_1(t);
              }
              ;
              LocalPopChoice(k_7);
            }
          else
            {
              t = j_7;
              {
                ATerm o_0 = NULL,y_0 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(w_0);
                o_0 = t;
                t = a_1;
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
  ATerm q_1 (ATerm t)
  {
    ATerm m_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_81(t);
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = m_7;
        {
          ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,o_1 = NULL,n_0 = NULL;
          t = z_81(t);
          o_1 = t;
          if(match_cons(t, sym__2))
            {
              h_1 = ATgetArgument(t, 0);
              i_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_1);
          g_1 = t;
          t = h_1;
          t = b_82(t);
          j_1 = t;
          t = i_1;
          t = q_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, g_1);
          t = a_82(t);
        }
      }
    return(t);
  }
  t = q_1(t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if(((ATgetType(s_7) != AT_LIST) || !(ATisEmpty(s_7))))
        _fail(t);
      {
        ATerm v_7 = ATgetArgument(t, 1);
        if(((ATgetType(v_7) != AT_LIST) || !(ATisEmpty(v_7))))
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
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
        {
          h_2 = ATgetFirst((ATermList) w_7);
          i_2 = (ATerm) ATgetNext((ATermList) w_7);
        }
      else
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            j_2 = ATgetFirst((ATermList) z_7);
            l_2 = (ATerm) ATgetNext((ATermList) z_7);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_2, j_2), (ATerm) ATmakeAppl(sym__2, i_2, l_2));
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
ATerm s_4 (ATerm c_561, ATerm h_561, ATerm l_52, ATerm t)
{
  ATerm u_1 = NULL,z_1 = NULL,c_2 = NULL,e_2 = NULL;
  t = SSL_explode_term(h_561);
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_561);
  if(match_cons(t, sym__2))
    {
      if((u_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_1, c_2);
  t = genzip_4_0(b_0, c_0, f_0, _id, t);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, l_52);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm a_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_73(t);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = a_8;
        t = w_73(t);
        t = p_2(t);
      }
    return(t);
  }
  t = p_2(t);
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
  ATerm y_2 = NULL;
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_2);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm d_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,r_0 = NULL;
  h_3 = t;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  d_3 = t;
  t = g_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, d_3);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_4 = ATgetFirst((ATermList) t);
      t_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_7(i_4, p_4, h_4, t);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_4), q_4), t_4);
          }
      }
    }
  else
    {
      t = b_7(i_4, p_4, h_4, t);
    }
  return(t);
}
ATerm b_7 (ATerm i_3, ATerm j_3, ATerm n_3, ATerm t)
{
  ATerm o_3 = NULL,t_3 = NULL,s_0 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  t = SSLgetAnnotations(n_3);
  o_3 = t;
  t = j_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      z_3 = (ATerm) ATgetNext((ATermList) t);
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
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_3;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = z_3;
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = j_3;
        t = s_4(x_3, y_3, z_3, t);
      }
    t_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_3, t_3);
    s_0 = t;
    t = SSLsetAnnotations(s_0, o_3);
  }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      if((w_6 != ATgetArgument(t, 1)))
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
  ATerm i_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_0, q_0, t_0, t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = i_8;
      {
        ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
        r_5 = t;
        if(match_cons(t, sym__2))
          {
            s_5 = ATgetArgument(t, 0);
            t_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_5;
        t = o_4(u_0, s_5, t_5, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL;
  z_10 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_11 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      {
        ATerm t_1 = NULL,x_1 = NULL,y_1 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(z_10);
        t_1 = t;
        t = a_11;
        t = k_102(t);
        x_1 = t;
        t = q_10;
        t = i_102(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_1, y_1);
        v_0 = t;
        t = SSLsetAnnotations(v_0, t_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          a_11 = ATgetArgument(t, 0);
          q_10 = ATgetArgument(t, 1);
          s_10 = ATgetArgument(t, 2);
          x_10 = ATgetArgument(t, 3);
          {
            ATerm u_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(z_10);
            u_2 = t;
            t = a_11;
            t = k_102(t);
            a_3 = t;
            t = q_10;
            t = k_102(t);
            b_3 = t;
            t = s_10;
            t = k_102(t);
            c_3 = t;
            t = x_10;
            t = i_102(t);
            e_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_3, b_3, c_3, e_3);
            f_1 = t;
            t = SSLsetAnnotations(f_1, u_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              a_11 = ATgetArgument(t, 0);
              q_10 = ATgetArgument(t, 1);
              s_10 = ATgetArgument(t, 2);
              x_10 = ATgetArgument(t, 3);
              {
                ATerm n_4 = NULL,h_5 = NULL,i_5 = NULL,o_5 = NULL,p_5 = NULL,y_6 = NULL;
                t = SSLgetAnnotations(z_10);
                n_4 = t;
                t = a_11;
                t = k_102(t);
                h_5 = t;
                t = q_10;
                t = k_102(t);
                i_5 = t;
                t = s_10;
                t = k_102(t);
                o_5 = t;
                t = x_10;
                t = i_102(t);
                p_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, h_5, i_5, o_5, p_5);
                y_6 = t;
                t = SSLsetAnnotations(y_6, n_4);
              }
            }
          else
            {
              ATerm d_6 = NULL,f_6 = NULL,z_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_10);
              d_6 = t;
              t = a_11;
              t = i_102(t);
              f_6 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_6);
              z_6 = t;
              t = SSLsetAnnotations(z_6, d_6);
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
ATerm b_1 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
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
                p_11 = ATgetArgument(t, 2);
                q_11 = ATgetArgument(t, 3);
                t = p_11;
                t = map_1_0(c_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                    p_11 = ATgetArgument(t, 2);
                    q_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_11;
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
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_12 = ATgetArgument(t, 0);
          {
            ATerm r_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_8);
      t = l_12;
    }
  else
    {
      t = p_8;
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
  ATerm g_13 = NULL;
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_13 = ATgetArgument(t, 0);
          {
            ATerm u_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_8);
      t = g_13;
    }
  else
    {
      t = s_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_13;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(x_0, b_1, tboundin_3_0, t);
  return(t);
}
ATerm l_1 (ATerm t)
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
ATerm m_1 (ATerm t)
{
  ATerm w_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = w_8;
      {
        ATerm i_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_14 = ATgetArgument(t, 0);
            t = i_14;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_14 = ATgetArgument(t, 0);
                p_14 = ATgetArgument(t, 1);
                q_14 = ATgetArgument(t, 2);
                r_14 = ATgetArgument(t, 3);
                t = q_14;
                t = map_1_0(n_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_14 = ATgetArgument(t, 0);
                    p_14 = ATgetArgument(t, 1);
                    q_14 = ATgetArgument(t, 2);
                    r_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_14;
                t = map_1_0(p_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm b_15 = NULL;
  ATerm b_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_15 = ATgetArgument(t, 0);
          {
            ATerm h_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_9);
      t = b_15;
    }
  else
    {
      t = b_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_15;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm p_15 = NULL;
  ATerm j_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_15 = ATgetArgument(t, 0);
          {
            ATerm n_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_9);
      t = p_15;
    }
  else
    {
      t = j_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_15;
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
            ATerm s_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_13;
      t = free_vars_3_0(l_1, m_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_14 = ATgetArgument(t, 0);
          {
            ATerm t_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_14;
    }
  return(t);
}
ATerm y_4 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm n_25, ATerm m_25, ATerm t)
{
  t = d_84(t);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm c_16 = NULL;
      c_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_25, c_16);
      t = c_84(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
    t = m_25;
  }
  return(t);
}
ATerm z_4 (ATerm z_83 (ATerm), ATerm j_25, ATerm i_25, ATerm t)
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
          ATerm x_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_16;
              {
                ATerm s_1 (ATerm t)
                {
                  t = i_25;
                  return(t);
                }
                t = y_4(z_83, s_1, t_16, u_16, t);
                t = d_17(t);
              }
              ;
              LocalPopChoice(z_9);
            }
          else
            {
              t = x_9;
              {
                ATerm n_6 = NULL,q_6 = NULL,l_7 = NULL;
                t = SSLgetAnnotations(s_16);
                n_6 = t;
                t = u_16;
                t = d_17(t);
                q_6 = t;
                t = (ATerm) ATinsert(CheckATermList(q_6), t_16);
                l_7 = t;
                t = SSLsetAnnotations(l_7, n_6);
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
ATerm w_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(d_2, c_7, d_7, t);
  return(t);
}
ATerm d_2 (ATerm t)
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
ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(k_2, t_7, u_7, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm c_8 = NULL;
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      if((c_8 != ATgetArgument(t, 1)))
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
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_101(t);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_17 = NULL,j_17 = NULL,v_6 = NULL,x_6 = NULL;
              i_17 = t;
              t = h_101(t);
              j_17 = t;
              t = i_17;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm l_17 = NULL;
                  t = w_18(t);
                  l_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_17, j_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_101(v_1, w_18, w_1, t);
                x_6 = t;
                t = SSL_explode_term(x_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_10 = ATgetArgument(t, 0);
                    v_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_6;
                t = foldr_3_0(a_2, b_2, _id, t);
              }
              ;
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              {
                ATerm g_7 = NULL,h_7 = NULL;
                h_7 = t;
                t = SSL_explode_term(h_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_10 = ATgetArgument(t, 0);
                    g_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_7;
                t = foldr_3_0(f_2, g_2, w_18, t);
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
  ATerm r_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_9);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,y_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_9 = ATgetArgument(t, 0);
            t = u_9;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_9 = ATgetArgument(t, 0);
                v_9 = ATgetArgument(t, 1);
                w_9 = ATgetArgument(t, 2);
                y_9 = ATgetArgument(t, 3);
                t = w_9;
                t = map_1_0(r_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_9 = ATgetArgument(t, 0);
                    v_9 = ATgetArgument(t, 1);
                    w_9 = ATgetArgument(t, 2);
                    y_9 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_9;
                t = map_1_0(s_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_10 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_10);
      t = r_10;
    }
  else
    {
      t = i_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_10;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_11 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_11 = ATgetArgument(t, 0);
          {
            ATerm n_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_10);
      t = i_11;
    }
  else
    {
      t = l_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_11;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm r_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_11 = ATgetArgument(t, 0);
      {
        ATerm o_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_11;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_11, term_u_10);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm u_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_11 = ATgetArgument(t, 0);
      {
        ATerm v_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_11), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm y_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_11 = ATgetArgument(t, 0);
      {
        ATerm w_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, y_11);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,m_22 = NULL,o_22 = NULL,r_22 = NULL,t_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  i_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      r_22 = ATgetArgument(t, 2);
      t_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_22;
  if(match_cons(t, sym_Seq_2))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
      t = x_22;
      if(match_cons(t, sym_Match_1))
        {
          h_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_22, o_22, r_22, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_22), y_22)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm z_8 = NULL,a_9 = NULL,c_9 = NULL,g_9 = NULL,i_9 = NULL,k_9 = NULL,l_9 = NULL,p_9 = NULL,q_9 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          x_22 = ATgetArgument(t, 0);
          y_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_22;
      if(match_cons(t, sym_Seq_2))
        {
          z_22 = ATgetArgument(t, 0);
          b_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_22;
      if(match_cons(t, sym_Match_1))
        {
          a_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_23;
      if(match_cons(t, sym_Op_2))
        {
          ATerm y_10 = ATgetArgument(t, 0);
          ATerm b_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_23;
      t = free_vars_3_0(o_2, q_2, tboundin_3_0, t);
      p_9 = t;
      t = r_22;
      t = map_1_0(t_2, t);
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, q_9);
      t = diff_0_0(t);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_22, a_9);
      t = diff_0_0(t);
      z_8 = t;
      t = a_9;
      t = map_1_0(v_2, t);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_22, c_9);
      t = conc_0_0(t);
      k_9 = t;
      t = new_0_0(t);
      g_9 = t;
      t = o_22;
      t = map_1_0(w_2, t);
      i_9 = t;
      t = k_9;
      t = map_1_0(x_2, t);
      l_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, g_9, o_22, k_9, (ATerm) ATmakeAppl(sym_Scope_2, z_8, b_23))), (ATerm) ATmakeAppl(sym_SDefT_4, m_22, o_22, r_22, (ATerm) ATmakeAppl(sym_Scope_2, a_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_23), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_9), i_9, l_9)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm r_24 (ATerm t)
  {
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
    o_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_24 = ATgetFirst((ATermList) t);
        n_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_12 = NULL,u_12 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(o_24);
          r_12 = t;
          t = n_24;
          t = r_24(t);
          u_12 = t;
          t = (ATerm) ATinsert(CheckATermList(u_12), m_24);
          n_7 = t;
          t = SSLsetAnnotations(n_7, r_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_24;
        t = l_80(t);
      }
    return(t);
  }
  t = r_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_23;
    }
  else
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(p_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_23 = ATgetFirst((ATermList) t);
          if(((p_23 != NULL) && (p_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_23;
      t = at_end_1_0(z_2, t);
    }
  return(t);
}
ATerm p_25 (ATerm v_24, ATerm t)
{
  ATerm w_24 = NULL;
  t = SSL_explode_term(v_24);
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,e_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym__2))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = b_25;
              return(t);
            }
            t = a_25;
            t = at_end_1_0(k_3, t);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = p_25(e_25, t);
          }
      }
    }
  else
    {
      t = p_25(e_25, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_25;
      t = a_86(t);
    }
  else
    {
      ATerm w_25 = NULL,x_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_25 = ATgetFirst((ATermList) t);
          t_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_25;
      t = c_86(t);
      w_25 = t;
      t = t_25;
      t = foldr_3_0(a_86, b_86, c_86, t);
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_25, x_25);
      t = b_86(t);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,p_7 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  n_26 = t;
  t = o_26;
  t = foldr_3_0(_id, conc_0_0, p_3, t);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_26);
  p_7 = t;
  t = SSLsetAnnotations(p_7, n_26);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm s_26 = NULL;
        s_26 = t;
        t = (ATerm) ATinsert(ATempty, s_26);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm z_25 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,r_7 = NULL,q_7 = NULL;
  i_26 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  z_25 = t;
  t = c_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_26 = ATgetFirst((ATermList) t);
      f_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  d_26 = t;
  t = f_26;
  t = Cons_2_0(l_3, m_3, t);
  g_26 = t;
  t = (ATerm) ATinsert(CheckATermList(g_26), e_26);
  q_7 = t;
  t = SSLsetAnnotations(q_7, d_26);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_26);
  r_7 = t;
  t = SSLsetAnnotations(r_7, z_25);
  return(t);
}
ATerm a_5 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm u_26 = NULL;
  t = SSL_fputc(k_38, l_38);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_26);
  return(t);
}
ATerm b_5 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm w_26 = NULL;
  t = SSL_write_term_to_stream_text(y_41, z_41);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_26);
  return(t);
}
ATerm d_5 (ATerm s_92 (ATerm), ATerm m_405, ATerm c_42, ATerm t)
{
  ATerm x_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_405, term_h_11);
  t = open_stream_0_0(t);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_26, c_42);
  t = s_92(t);
  t = fclose_0_0(t);
  t = c_42;
  return(t);
}
ATerm c_5 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_write_term_to_stream_baf(u_41, v_41);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(match_cons(j_11, sym_Stream_1))
        {
          b_27 = ATgetArgument(j_11, 0);
        }
      else
        _fail(t);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(b_27, c_27, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm d_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(match_cons(k_11, sym_Stream_1))
        {
          i_27 = ATgetArgument(k_11, 0);
        }
      else
        _fail(t);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(i_27, j_27, t);
  d_27 = t;
  t = term_m_11;
  g_27 = t;
  t = d_27;
  if(match_cons(t, sym_Stream_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, d_27);
  t = a_5(g_27, h_27, t);
  return(t);
}
ATerm output_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  t = b_97(t);
  a_27 = t;
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
        t = term_x_11;
      }
    z_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_12;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
          LocalPopChoice(a_12);
          if(match_cons(t, sym__2))
            {
              ATerm c_12 = ATgetArgument(t, 0);
              ATerm d_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(q_3, z_26, a_27, t);
        }
      else
        {
          t = z_11;
          if(match_cons(t, sym__2))
            {
              ATerm e_12 = ATgetArgument(t, 0);
              ATerm f_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(r_3, z_26, a_27, t);
        }
    }
  }
  return(t);
}
ATerm h_28 (ATerm u_27, ATerm t)
{
  t = SSL_fclose(u_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  z_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_27 = ATgetArgument(t, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_27);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = h_28(z_27, t);
          }
      }
    }
  else
    {
      t = h_28(z_27, t);
    }
  return(t);
}
ATerm e_5 (ATerm a_42, ATerm t)
{
  t = SSL_read_term_from_stream(a_42);
  return(t);
}
ATerm f_5 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm i_28 = NULL;
  t = SSL_fopen(m_38, n_38);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_28 = NULL;
  t = SSL_stdin_stream();
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_stdout_stream();
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_28 = NULL;
  t = SSL_stderr_stream();
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_28);
  return(t);
}
ATerm k_30 (ATerm v_28, ATerm t)
{
  ATerm w_28 = NULL;
  t = SSL_explode_term(v_28);
  if(match_cons(t, sym__2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_12 = ATgetArgument(t, 1);
        if(((ATgetType(j_12) == AT_LIST) && !(ATisEmpty(j_12))))
          {
            w_28 = ATgetFirst((ATermList) j_12);
            {
              ATerm k_12 = (ATerm) ATgetNext((ATermList) j_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_30 (ATerm z_28, ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,i_29 = NULL,x_7 = NULL;
  t = SSLgetAnnotations(b_29);
  f_29 = t;
  t = z_28;
  if(match_cons(t, sym_Path_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_29, a_29);
  x_7 = t;
  t = SSLsetAnnotations(x_7, f_29);
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(d_29, e_29, t);
  return(t);
}
ATerm m_30 (ATerm k_29, ATerm l_29, ATerm m_29, ATerm t)
{
  ATerm n_29 = NULL,q_29 = NULL,t_29 = NULL,w_29 = NULL,y_7 = NULL;
  t = SSLgetAnnotations(m_29);
  t_29 = t;
  t = SSL_is_string(k_29);
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, l_29);
  y_7 = t;
  t = SSLsetAnnotations(y_7, t_29);
  if(match_cons(t, sym__2))
    {
      n_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(n_29, q_29, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_30 = NULL,g_30 = NULL,j_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_12 = ATgetArgument(t, 0);
      ATerm n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_30 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_30(d_30, t);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm q_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30(g_30, j_30, d_30, t);
                  ;
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = q_12;
                  t = m_30(g_30, j_30, d_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_30(d_30, t);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_30 = NULL;
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_30, term_x_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = debug_1_0(s_3, t);
      _fail(t);
    }
  q_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(r_30, t);
  p_30 = t;
  t = q_30;
  t = fclose_0_0(t);
  t = p_30;
  return(t);
}
ATerm input_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      t = term_b_13;
    }
  t = ReadFromFile_0_0(t);
  t = c_97(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  a_31 = t;
  t = term_c_13;
  t = whoami_0_0(t);
  b_31 = t;
  t = term_d_13;
  d_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_13), b_31), term_e_13);
  e_31 = t;
  t = SSL_printnl(d_31, e_31);
  t = term_h_13;
  c_31 = t;
  t = SSL_exit(c_31);
  t = a_31;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  if(match_string(t, "-k"))
    {
      t = g_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_31;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  t = SSL_string_to_int(h_31);
  i_31 = t;
  t = term_i_13;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, i_31);
  t = n_5(j_31, i_31, t);
  t = h_31;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, a_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  if(match_string(t, "-S"))
    {
      t = l_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_31;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  t = term_k_13;
  m_31 = t;
  t = term_n_13;
  n_31 = t;
  t = term_o_13;
  t = n_5(m_31, n_31, t);
  t = term_p_13;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = SSL_string_to_int(o_31);
  p_31 = t;
  t = term_k_13;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, p_31);
  t = n_5(q_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_31);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  t = term_u_13;
  r_31 = t;
  t = term_c_13;
  s_31 = t;
  t = term_v_13;
  t = n_5(r_31, s_31, t);
  t = term_w_13;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, d_4, t);
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = y_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = Option_3_0(j_4, k_4, l_4, t);
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm t_31 = NULL;
  t = term_e_14;
  t_31 = t;
  t = SSL_table_put(t_31, b_43, c_43);
  t = (ATerm) ATmakeAppl(sym__3, term_e_14, b_43, c_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
      t = term_c_13;
      t = h_0(t);
      y_31 = t;
      t = term_f_14;
      z_31 = t;
      t = term_h_14;
      a_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_14, term_h_14, y_31);
      t = l_5(z_31, a_32, y_31, t);
      _fail(t);
    }
  else
    {
      ATerm d_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_31 = ATgetFirst((ATermList) t);
          x_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_31;
      t = d_0(t);
      t = term_c_13;
      t = g_0(t);
      d_32 = t;
      t = (ATerm) ATinsert(CheckATermList(x_31), d_32);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  if(match_string(t, "-o"))
    {
      t = h_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_32;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  i_32 = t;
  t = term_w_11;
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, i_32);
  t = n_5(j_32, i_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_32);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, r_4, u_4, t);
  return(t);
}
ATerm l_5 (ATerm z_47, ATerm a_48, ATerm y_47, ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_14 = ATgetArgument(t, 0);
            ATerm o_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
        t = k_5(z_47, a_48, t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = (ATerm) ATempty;
      }
    m_32 = t;
    t = (ATerm) ATinsert(CheckATermList(m_32), y_47);
    n_32 = t;
    t = SSL_table_put(z_47, a_48, n_32);
    t = l_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_32 = NULL,z_32 = NULL,c_33 = NULL;
      t = term_c_13;
      t = m_0(t);
      y_32 = t;
      t = term_f_14;
      z_32 = t;
      t = term_h_14;
      c_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_14, term_h_14, y_32);
      t = l_5(z_32, c_33, y_32, t);
      _fail(t);
    }
  else
    {
      ATerm g_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_32 = ATgetFirst((ATermList) t);
          v_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_32 = ATgetFirst((ATermList) t);
          x_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_32;
      t = k_0(t);
      t = w_32;
      t = l_0(t);
      g_33 = t;
      t = (ATerm) ATinsert(CheckATermList(x_32), g_33);
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "-i"))
    {
      t = k_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_33;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  l_33 = t;
  t = term_a_13;
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, l_33);
  t = n_5(m_33, l_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_33);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, w_4, x_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_13;
  t = whoami_0_0(t);
  n_33 = t;
  t = term_d_13;
  p_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_14), n_33);
  q_33 = t;
  t = SSL_printnl(p_33, q_33);
  t = term_h_13;
  o_33 = t;
  t = SSL_exit(o_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_5 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_35, l_35);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = SSL_addr(k_35, l_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_33;
      t = y_85(t);
    }
  else
    {
      ATerm x_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_33 = ATgetFirst((ATermList) t);
          u_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_33;
      t = foldr_2_0(y_85, z_85, t);
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_33, x_33);
      t = z_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(q_13, r_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_34 = NULL,l_13 = NULL,m_13 = NULL;
  t = times_0_0(t);
  m_13 = t;
  t = SSL_explode_term(m_13);
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13;
  t = foldr_2_0(m_5, q_5, t);
  a_34 = t;
  t = SSL_TicksToSeconds(a_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_34;
        if((m_34 != t))
          {
            _fail(t);
          }
        t = l_34;
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = (ATerm) ATmakeAppl(sym__2, m_34, n_34);
        {
          ATerm a_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_34, n_34);
              ;
              LocalPopChoice(c_15);
            }
          else
            {
              t = a_15;
              t = SSL_gtr(m_34, n_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_34, n_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL;
        t = term_k_13;
        t = get_config_0_0(t);
        t_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_34, term_h_13);
        t = geq_0_0(t);
        t = r_34;
        t = c_94(t);
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = r_34;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,y_34 = NULL,z_34 = NULL;
  t = run_time_0_0(t);
  v_34 = t;
  t = term_c_13;
  t = whoami_0_0(t);
  w_34 = t;
  t = term_d_13;
  y_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_15), v_34), term_f_15), w_34);
  z_34 = t;
  t = SSL_printnl(y_34, z_34);
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_15), v_34), term_f_15), w_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_13;
  a_35 = t;
  t = SSL_exit(a_35);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  j_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_35 = ATgetArgument(t, 0);
          {
            ATerm n_14 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(j_35);
            n_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_35);
            b_8 = t;
            t = SSLsetAnnotations(b_8, n_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = fetch_1_0(v_5, t);
    }
  t = s_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_35 = ATgetFirst((ATermList) t);
      p_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_35 = NULL,u_35 = NULL;
        ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_35)), not_null(u_35));
          return(t);
        }
        t = p_35;
        t = j_0(t);
        if(((t_35 != NULL) && (t_35 != t)))
          _fail(t);
        else
          t_35 = t;
        t = o_35;
        t = i_0(t);
        if(((u_35 != NULL) && (u_35 != t)))
          _fail(t);
        else
          u_35 = t;
        t = p_35;
        t = reverse_acc_2_0(i_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_13;
      t = j_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,j_8 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_36);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_35);
  j_8 = t;
  t = SSLsetAnnotations(j_8, y_35);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_36), term_k_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      t = fetch_1_0(x_5, t);
    }
  t = term_o_15;
  t = echo_0_0(t);
  t = term_f_14;
  w_35 = t;
  t = term_h_14;
  x_35 = t;
  t = term_q_15;
  t = k_5(w_35, x_35, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm a_37 (ATerm t)
  {
    ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
    x_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_36 = ATgetFirst((ATermList) t);
        z_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_15 = NULL,t_15 = NULL,l_8 = NULL;
          t = SSLgetAnnotations(x_36);
          n_15 = t;
          t = y_36;
          t = f_80(t);
          t_15 = t;
          t = (ATerm) ATinsert(CheckATermList(z_36), t_15);
          l_8 = t;
          t = SSLsetAnnotations(l_8, n_15);
          ;
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          {
            ATerm e_16 = NULL,k_16 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(x_36);
            e_16 = t;
            t = z_36;
            t = a_37(t);
            k_16 = t;
            t = (ATerm) ATinsert(CheckATermList(k_16), y_36);
            m_8 = t;
            t = SSLsetAnnotations(m_8, e_16);
          }
        }
    }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_15 = ATgetFirst((ATermList) t);
                ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_37;
          }
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = (ATerm) ATinsert(ATempty, e_37);
      }
    f_37 = t;
    t = term_x_11;
    g_37 = t;
    t = SSL_printnl(g_37, f_37);
    t = e_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_5 (ATerm a_33, ATerm b_33, ATerm t)
{
  t = SSL_strcat(a_33, b_33);
  return(t);
}
ATerm debug_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  k_37 = t;
  t = q_92(t);
  l_37 = t;
  t = term_d_13;
  m_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_37), l_37);
  n_37 = t;
  t = SSL_printnl(m_37, n_37);
  t = k_37;
  return(t);
}
ATerm map_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm c_38 (ATerm t)
  {
    ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
    z_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_37;
      }
    else
      {
        ATerm c_17 = NULL,o_17 = NULL,p_17 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_38 = ATgetFirst((ATermList) t);
            b_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_37);
        c_17 = t;
        t = a_38;
        t = v_79(t);
        o_17 = t;
        t = b_38;
        t = c_38(t);
        p_17 = t;
        t = (ATerm) ATinsert(CheckATermList(p_17), o_17);
        v_8 = t;
        t = SSLsetAnnotations(v_8, c_17);
      }
    return(t);
  }
  t = c_38(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL;
      q_38 = t;
      t = SSL_is_string(q_38);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = b_16;
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_6, t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
              w_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_38 = ATgetArgument(t, 0);
                  t = x_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_38 = ATgetArgument(t, 0);
                      t = x_38;
                      {
                        ATerm h_16 = t;
                        int i_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_16);
                          }
                        else
                          {
                            t = h_16;
                            t = debug_1_0(b_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_39 = NULL,d_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_38 = ATgetArgument(t, 0);
                          y_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_38;
                      t = eval_config_0_0(t);
                      c_39 = t;
                      t = y_38;
                      t = eval_config_0_0(t);
                      d_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
                      t = j_5(c_39, d_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm q_49, ATerm r_49, ATerm t)
{
  t = SSL_table_get(q_49, r_49);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  h_39 = t;
  t = term_e_14;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, h_39);
  t = k_5(i_39, h_39, t);
  {
    ATerm j_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_39 = NULL,k_39 = NULL;
        t = eval_config_0_0(t);
        j_39 = t;
        t = term_e_14;
        k_39 = t;
        t = SSL_table_put(k_39, h_39, j_39);
        t = j_39;
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = j_16;
      }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  t = term_m_16;
  n_39 = t;
  t = term_c_13;
  o_39 = t;
  t = term_n_16;
  t = n_5(n_39, o_39, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = term_m_16;
  r_39 = t;
  t = term_c_13;
  s_39 = t;
  t = term_n_16;
  t = n_5(r_39, s_39, t);
  t = term_p_16;
  p_39 = t;
  t = term_c_13;
  q_39 = t;
  t = term_q_16;
  t = n_5(p_39, q_39, t);
  t = term_r_16;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, e_6, g_6, t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      t = Option_3_0(h_6, i_6, j_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,x_8 = NULL;
  y_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_39);
  t_39 = t;
  t = u_39;
  t = h_59(t);
  w_39 = t;
  t = v_39;
  t = i_59(t);
  x_39 = t;
  t = (ATerm) ATinsert(CheckATermList(x_39), w_39);
  x_8 = t;
  t = SSLsetAnnotations(x_8, t_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,d_9 = NULL;
  d_40 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_17;
        t = v_98(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
      }
    t = d_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_40 = ATgetFirst((ATermList) t);
        g_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_40);
    e_40 = t;
    t = term_u_14;
    j_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_14, f_40);
    t = n_5(j_40, f_40, t);
    t = g_40;
    {
      ATerm t_40 (ATerm t)
      {
        ATerm b_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_40 = NULL;
                m_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_40;
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                t = v_98(t);
                t = Cons_2_0(_id, t_40, t);
              }
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = b_17;
            {
              ATerm p_40 = NULL,q_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_40 = ATgetFirst((ATermList) t);
                  q_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_40), (ATerm) ATmakeAppl(sym_Undefined_1, p_40));
            }
          }
        return(t);
      }
      t = t_40(t);
      i_40 = t;
      t = (ATerm) ATinsert(CheckATermList(i_40), (ATerm) ATmakeAppl(sym_Program_1, f_40));
      d_9 = t;
      t = SSLsetAnnotations(d_9, e_40);
    }
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  if(match_string(t, "--help"))
    {
      t = f_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_41;
        }
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  t = term_j_15;
  g_41 = t;
  t = term_c_13;
  h_41 = t;
  t = term_h_17;
  t = n_5(g_41, h_41, t);
  t = term_k_17;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_m_17;
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
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  a_41 = t;
  t = term_f_14;
  c_41 = t;
  t = term_h_14;
  d_41 = t;
  t = (ATerm) ATempty;
  e_41 = t;
  t = SSL_table_put(c_41, d_41, e_41);
  t = a_41;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm n_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_98(t);
          ;
          LocalPopChoice(q_17);
        }
      else
        {
          t = n_17;
          {
            ATerm r_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_6, m_6, o_6, t);
                ;
                LocalPopChoice(s_17);
              }
            else
              {
                t = r_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_6, t);
    {
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_41 = NULL;
          o_41 = t;
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_18 = NULL;
                t = o_41;
                {
                  ATerm x_17 = t;
                  int y_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_17);
                    }
                  else
                    {
                      t = x_17;
                      t = fetch_1_0(p_6, t);
                    }
                  t = o_41;
                  t = default_system_usage_0_0(t);
                  t = term_n_13;
                  k_18 = t;
                  t = SSL_exit(k_18);
                }
                ;
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                {
                  ATerm o_18 = NULL;
                  t = term_m_16;
                  t = get_config_0_0(t);
                  t = o_41;
                  t = default_system_about_0_0(t);
                  t = term_n_13;
                  o_18 = t;
                  t = SSL_exit(o_18);
                }
              }
          }
          ;
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          {
            ATerm z_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
                ATerm r_6 (ATerm t)
                {
                  ATerm s_41 = NULL,t_41 = NULL,w_41 = NULL,f_9 = NULL;
                  w_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_41);
                  s_41 = t;
                  t = t_41;
                  if(((y_40 != NULL) && (y_40 != t)))
                    _fail(t);
                  else
                    y_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_41);
                  f_9 = t;
                  t = SSLsetAnnotations(f_9, s_41);
                  return(t);
                }
                t = fetch_1_0(r_6, t);
                t = term_d_13;
                q_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), term_b_18);
                r_41 = t;
                t = SSL_printnl(q_41, r_41);
                t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), term_b_18));
                t = default_system_usage_0_0(t);
                t = term_h_13;
                p_41 = t;
                t = SSL_exit(p_41);
                ;
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
              }
          }
        }
      z_40 = t;
      t = term_f_14;
      b_41 = t;
      t = SSL_table_destroy(b_41);
      t = z_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  t = parse_options_1_0(u_96, t);
  g_42 = t;
  t = term_c_18;
  j_42 = t;
  t = SSL_table_create(j_42);
  t = term_c_18;
  h_42 = t;
  t = term_d_18;
  i_42 = t;
  t = SSL_table_put(h_42, i_42, g_42);
  t = g_42;
  t = w_96(t);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_96, t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm n_18 = t;
              int p_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_6, a_7, f_7, t);
                  ;
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = n_18;
                  {
                    ATerm q_18 = t;
                    int r_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(r_18);
                      }
                    else
                      {
                        t = q_18;
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
ATerm t_6 (ATerm t)
{
  t = input_1_0(i_7, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  t = term_b_12;
  l_42 = t;
  t = term_c_13;
  m_42 = t;
  t = term_s_18;
  t = n_5(l_42, m_42, t);
  t = term_t_18;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_6, default_usage_0_0, _id, t_6, t);
  return(t);
}
