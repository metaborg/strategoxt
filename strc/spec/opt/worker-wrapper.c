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
ATerm term_s_18;
ATerm term_r_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_a_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_z_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
void init_constant_terms (void)
{
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_10, (ATerm) ATempty);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_10);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_k_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_b_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_f_14);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_b_13);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_b_13);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_b_13);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_b_13);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm o_4 (ATerm z_83 (ATerm), ATerm i_25, ATerm h_25, ATerm);
ATerm genzip_4_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm f_0 (ATerm);
ATerm t_4 (ATerm i_565, ATerm n_565, ATerm p_52, ATerm);
ATerm while_not_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm c_7 (ATerm i_3, ATerm j_3, ATerm n_3, ATerm);
ATerm u_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm);
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
ATerm z_4 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm o_25, ATerm n_25, ATerm);
ATerm a_5 (ATerm e_84 (ATerm), ATerm k_25, ATerm j_25, ATerm);
ATerm w_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm k_2 (ATerm);
ATerm free_vars_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm worker_wrapper_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_25 (ATerm w_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm worker_wrapper_spec_0_0 (ATerm);
ATerm b_5 (ATerm o_38, ATerm p_38, ATerm);
ATerm c_5 (ATerm c_42, ATerm d_42, ATerm);
ATerm e_5 (ATerm x_92 (ATerm), ATerm s_409, ATerm g_42, ATerm);
ATerm d_5 (ATerm y_41, ATerm z_41, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_1_0 (ATerm g_97 (ATerm), ATerm);
ATerm c_28 (ATerm v_27, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_5 (ATerm e_42, ATerm);
ATerm g_5 (ATerm q_38, ATerm r_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_30 (ATerm u_28, ATerm);
ATerm m_30 (ATerm a_29, ATerm b_29, ATerm c_29, ATerm);
ATerm n_30 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm);
ATerm h_5 (ATerm);
ATerm s_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm h_97 (ATerm), ATerm);
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
ATerm p_5 (ATerm f_43, ATerm g_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_5 (ATerm d_48, ATerm e_48, ATerm c_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_5 (ATerm o_35, ATerm p_35, ATerm);
ATerm foldr_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm o_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm need_help_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_5 (ATerm d_33, ATerm e_33, ATerm);
ATerm debug_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm m_5 (ATerm u_49, ATerm v_49, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_59 (ATerm), ATerm m_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_99 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm parse_options_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm b_7 (ATerm);
ATerm g_7 (ATerm);
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
ATerm o_4 (ATerm z_83 (ATerm), ATerm i_25, ATerm h_25, ATerm t)
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
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                ATerm a_0 (ATerm t)
                {
                  t = h_25;
                  return(t);
                }
                t = z_4(z_83, a_0, z_0, a_1, t);
                t = e_1(t);
              }
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
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
  t = i_25;
  t = e_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm n_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_82(t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = n_7;
        {
          ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,o_1 = NULL,n_0 = NULL;
          t = e_82(t);
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
          t = g_82(t);
          j_1 = t;
          t = i_1;
          t = q_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, g_1);
          t = f_82(t);
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
      ATerm t_7 = ATgetArgument(t, 0);
      if(((ATgetType(t_7) != AT_LIST) || !(ATisEmpty(t_7))))
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
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
        {
          h_2 = ATgetFirst((ATermList) x_7);
          i_2 = (ATerm) ATgetNext((ATermList) x_7);
        }
      else
        _fail(t);
      {
        ATerm a_8 = ATgetArgument(t, 1);
        if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
          {
            j_2 = ATgetFirst((ATermList) a_8);
            l_2 = (ATerm) ATgetNext((ATermList) a_8);
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
ATerm t_4 (ATerm i_565, ATerm n_565, ATerm p_52, ATerm t)
{
  ATerm u_1 = NULL,z_1 = NULL,c_2 = NULL,e_2 = NULL;
  t = SSL_explode_term(n_565);
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_565);
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
  t = (ATerm) ATmakeAppl(sym__2, e_2, p_52);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm b_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_74(t);
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = b_8;
        t = b_74(t);
        t = p_2(t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm for_3_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  t = d_74(t);
  t = while_not_2_0(e_74, f_74, t);
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
  ATerm h_4 = NULL,i_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
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
      s_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_7(i_4, p_4, h_4, t);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_4), q_4), s_4);
          }
      }
    }
  else
    {
      t = c_7(i_4, p_4, h_4, t);
    }
  return(t);
}
ATerm c_7 (ATerm i_3, ATerm j_3, ATerm n_3, ATerm t)
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
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_3;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = z_3;
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = j_3;
        t = t_4(x_3, y_3, z_3, t);
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
  ATerm x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      if((x_6 != ATgetArgument(t, 1)))
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
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_0, q_0, t_0, t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
        s_5 = t;
        if(match_cons(t, sym__2))
          {
            t_5 = ATgetArgument(t, 0);
            u_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5;
        t = o_4(u_0, t_5, u_5, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,t_10 = NULL,y_10 = NULL,a_11 = NULL,b_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_11 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      {
        ATerm t_1 = NULL,x_1 = NULL,y_1 = NULL,v_0 = NULL;
        t = SSLgetAnnotations(a_11);
        t_1 = t;
        t = b_11;
        t = p_102(t);
        x_1 = t;
        t = r_10;
        t = n_102(t);
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
          b_11 = ATgetArgument(t, 0);
          r_10 = ATgetArgument(t, 1);
          t_10 = ATgetArgument(t, 2);
          y_10 = ATgetArgument(t, 3);
          {
            ATerm u_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(a_11);
            u_2 = t;
            t = b_11;
            t = p_102(t);
            a_3 = t;
            t = r_10;
            t = p_102(t);
            b_3 = t;
            t = t_10;
            t = p_102(t);
            c_3 = t;
            t = y_10;
            t = n_102(t);
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
              b_11 = ATgetArgument(t, 0);
              r_10 = ATgetArgument(t, 1);
              t_10 = ATgetArgument(t, 2);
              y_10 = ATgetArgument(t, 3);
              {
                ATerm n_4 = NULL,y_4 = NULL,j_5 = NULL,q_5 = NULL,r_5 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(a_11);
                n_4 = t;
                t = b_11;
                t = p_102(t);
                y_4 = t;
                t = r_10;
                t = p_102(t);
                j_5 = t;
                t = t_10;
                t = p_102(t);
                q_5 = t;
                t = y_10;
                t = n_102(t);
                r_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, y_4, j_5, q_5, r_5);
                z_6 = t;
                t = SSLsetAnnotations(z_6, n_4);
              }
            }
          else
            {
              ATerm e_6 = NULL,g_6 = NULL,a_7 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_11);
              e_6 = t;
              t = b_11;
              t = n_102(t);
              g_6 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_6);
              a_7 = t;
              t = SSLsetAnnotations(a_7, e_6);
            }
        }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm m_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_11);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm m_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = m_8;
      {
        ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_11 = ATgetArgument(t, 0);
            t = o_11;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_11 = ATgetArgument(t, 0);
                p_11 = ATgetArgument(t, 1);
                q_11 = ATgetArgument(t, 2);
                r_11 = ATgetArgument(t, 3);
                t = q_11;
                t = map_1_0(c_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_11 = ATgetArgument(t, 0);
                    p_11 = ATgetArgument(t, 1);
                    q_11 = ATgetArgument(t, 2);
                    r_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_11;
                t = map_1_0(d_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_12 = ATgetArgument(t, 0);
          {
            ATerm s_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_8);
      t = m_12;
    }
  else
    {
      t = q_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_12;
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm h_13 = NULL;
  ATerm t_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_13 = ATgetArgument(t, 0);
          {
            ATerm w_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_8);
      t = h_13;
    }
  else
    {
      t = t_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_13;
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
  ATerm h_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_14);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm y_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = y_8;
      {
        ATerm j_14 = NULL,k_14 = NULL,r_14 = NULL,s_14 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_14 = ATgetArgument(t, 0);
            t = j_14;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_14 = ATgetArgument(t, 0);
                k_14 = ATgetArgument(t, 1);
                r_14 = ATgetArgument(t, 2);
                s_14 = ATgetArgument(t, 3);
                t = r_14;
                t = map_1_0(n_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_14 = ATgetArgument(t, 0);
                    k_14 = ATgetArgument(t, 1);
                    r_14 = ATgetArgument(t, 2);
                    s_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_14;
                t = map_1_0(p_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm c_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_15 = ATgetArgument(t, 0);
          {
            ATerm i_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_9);
      t = a_15;
    }
  else
    {
      t = c_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_15;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm k_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_15 = ATgetArgument(t, 0);
          {
            ATerm o_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_9);
      t = r_15;
    }
  else
    {
      t = k_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_15;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_13 = NULL,e_14 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_14 = ATgetArgument(t, 0);
      t = e_14;
      if(match_cons(t, sym_Rule_3))
        {
          w_13 = ATgetArgument(t, 0);
          {
            ATerm p_9 = ATgetArgument(t, 1);
          }
          {
            ATerm t_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_13;
      t = free_vars_3_0(l_1, m_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_14 = ATgetArgument(t, 0);
          {
            ATerm u_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_14;
    }
  return(t);
}
ATerm z_4 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm o_25, ATerm n_25, ATerm t)
{
  t = i_84(t);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm b_16 = NULL;
      b_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_25, b_16);
      t = h_84(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
    t = n_25;
  }
  return(t);
}
ATerm a_5 (ATerm e_84 (ATerm), ATerm k_25, ATerm j_25, ATerm t)
{
  ATerm y_16 (ATerm t)
  {
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
    t_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_16 = ATgetFirst((ATermList) t);
            v_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_16;
              {
                ATerm s_1 (ATerm t)
                {
                  t = j_25;
                  return(t);
                }
                t = z_4(e_84, s_1, u_16, v_16, t);
                t = y_16(t);
              }
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = y_9;
              {
                ATerm o_6 = NULL,r_6 = NULL,m_7 = NULL;
                t = SSLgetAnnotations(t_16);
                o_6 = t;
                t = v_16;
                t = y_16(t);
                r_6 = t;
                t = (ATerm) ATinsert(CheckATermList(r_6), u_16);
                m_7 = t;
                t = SSLsetAnnotations(m_7, o_6);
              }
            }
        }
      }
    return(t);
  }
  t = k_25;
  t = y_16(t);
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
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(d_2, d_7, e_7, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      if((f_7 != ATgetArgument(t, 1)))
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
  ATerm v_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(k_2, v_7, w_7, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      if((d_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_18 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
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
              ATerm j_17 = NULL,k_17 = NULL,w_6 = NULL,y_6 = NULL;
              j_17 = t;
              t = m_101(t);
              k_17 = t;
              t = j_17;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm m_17 = NULL;
                  t = t_18(t);
                  m_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_17, k_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_101(v_1, t_18, w_1, t);
                y_6 = t;
                t = SSL_explode_term(y_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_10 = ATgetArgument(t, 0);
                    w_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_6;
                t = foldr_3_0(a_2, b_2, _id, t);
              }
              ;
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              {
                ATerm h_7 = NULL,j_7 = NULL;
                j_7 = t;
                t = SSL_explode_term(j_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_10 = ATgetArgument(t, 0);
                    h_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_7;
                t = foldr_3_0(f_2, g_2, t_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm s_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_9);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_9 = ATgetArgument(t, 0);
            t = v_9;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_9 = ATgetArgument(t, 0);
                w_9 = ATgetArgument(t, 1);
                x_9 = ATgetArgument(t, 2);
                z_9 = ATgetArgument(t, 3);
                t = x_9;
                t = map_1_0(r_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_9 = ATgetArgument(t, 0);
                    w_9 = ATgetArgument(t, 1);
                    x_9 = ATgetArgument(t, 2);
                    z_9 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_9;
                t = map_1_0(s_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm s_10 = NULL;
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_10 = ATgetArgument(t, 0);
          {
            ATerm l_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_10);
      t = s_10;
    }
  else
    {
      t = j_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_10;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm j_11 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_11 = ATgetArgument(t, 0);
          {
            ATerm o_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_10);
      t = j_11;
    }
  else
    {
      t = m_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_11;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm s_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_11 = ATgetArgument(t, 0);
      {
        ATerm p_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_11;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_11, term_v_10);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm v_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_11 = ATgetArgument(t, 0);
      {
        ATerm w_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_11), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm z_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_11 = ATgetArgument(t, 0);
      {
        ATerm x_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, z_11);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,o_22 = NULL,q_22 = NULL,t_22 = NULL,v_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  j_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      q_22 = ATgetArgument(t, 2);
      t_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_22;
  if(match_cons(t, sym_Seq_2))
    {
      v_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
      t = v_22;
      if(match_cons(t, sym_Match_1))
        {
          i_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_22, o_22, q_22, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_22), z_22)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm u_8 = NULL,b_9 = NULL,e_9 = NULL,h_9 = NULL,j_9 = NULL,l_9 = NULL,m_9 = NULL,q_9 = NULL,r_9 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          v_22 = ATgetArgument(t, 0);
          z_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_22;
      if(match_cons(t, sym_Seq_2))
        {
          a_23 = ATgetArgument(t, 0);
          c_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_23;
      if(match_cons(t, sym_Match_1))
        {
          b_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_23;
      if(match_cons(t, sym_Op_2))
        {
          ATerm z_10 = ATgetArgument(t, 0);
          ATerm c_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_23;
      t = free_vars_3_0(o_2, q_2, tboundin_3_0, t);
      q_9 = t;
      t = q_22;
      t = map_1_0(t_2, t);
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
      t = diff_0_0(t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_22, b_9);
      t = diff_0_0(t);
      u_8 = t;
      t = b_9;
      t = map_1_0(v_2, t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_22, e_9);
      t = conc_0_0(t);
      l_9 = t;
      t = new_0_0(t);
      h_9 = t;
      t = o_22;
      t = map_1_0(w_2, t);
      j_9 = t;
      t = l_9;
      t = map_1_0(x_2, t);
      m_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, h_9, o_22, l_9, (ATerm) ATmakeAppl(sym_Scope_2, u_8, c_23))), (ATerm) ATmakeAppl(sym_SDefT_4, k_22, o_22, q_22, (ATerm) ATmakeAppl(sym_Scope_2, b_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_23), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_9), j_9, m_9)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm q_24 (ATerm t)
  {
    ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
    p_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_24 = ATgetFirst((ATermList) t);
        o_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_12 = NULL,v_12 = NULL,o_7 = NULL;
          t = SSLgetAnnotations(p_24);
          s_12 = t;
          t = o_24;
          t = q_24(t);
          v_12 = t;
          t = (ATerm) ATinsert(CheckATermList(v_12), n_24);
          o_7 = t;
          t = SSLsetAnnotations(o_7, s_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_24;
        t = q_80(t);
      }
    return(t);
  }
  t = q_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_23 = NULL,p_23 = NULL,q_23 = NULL;
  n_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_23;
    }
  else
    {
      ATerm z_2 (ATerm t)
      {
        t = not_null(q_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_23 = ATgetFirst((ATermList) t);
          if(((q_23 != NULL) && (q_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_23;
      t = at_end_1_0(z_2, t);
    }
  return(t);
}
ATerm m_25 (ATerm w_24, ATerm t)
{
  ATerm x_24 = NULL;
  t = SSL_explode_term(w_24);
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = c_25;
              return(t);
            }
            t = b_25;
            t = at_end_1_0(k_3, t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = m_25(d_25, t);
          }
      }
    }
  else
    {
      t = m_25(d_25, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_25;
      t = f_86(t);
    }
  else
    {
      ATerm x_25 = NULL,y_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_25 = ATgetFirst((ATermList) t);
          u_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_25;
      t = h_86(t);
      x_25 = t;
      t = u_25;
      t = foldr_3_0(f_86, g_86, h_86, t);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
      t = g_86(t);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,q_7 = NULL;
  r_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  o_26 = t;
  t = p_26;
  t = foldr_3_0(_id, conc_0_0, p_3, t);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_26);
  q_7 = t;
  t = SSLsetAnnotations(q_7, o_26);
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
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm t_26 = NULL;
        t_26 = t;
        t = (ATerm) ATinsert(ATempty, t_26);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,s_7 = NULL,r_7 = NULL;
  j_26 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_26);
  a_26 = t;
  t = b_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_26);
  e_26 = t;
  t = g_26;
  t = Cons_2_0(l_3, m_3, t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), f_26);
  r_7 = t;
  t = SSLsetAnnotations(r_7, e_26);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_26);
  s_7 = t;
  t = SSLsetAnnotations(s_7, a_26);
  return(t);
}
ATerm b_5 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_fputc(o_38, p_38);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
ATerm c_5 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm w_26 = NULL;
  t = SSL_write_term_to_stream_text(c_42, d_42);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_26);
  return(t);
}
ATerm e_5 (ATerm x_92 (ATerm), ATerm s_409, ATerm g_42, ATerm t)
{
  ATerm y_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_409, term_i_11);
  t = h_5(t);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, g_42);
  t = x_92(t);
  t = fclose_0_0(t);
  t = g_42;
  return(t);
}
ATerm d_5 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_write_term_to_stream_baf(y_41, z_41);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(match_cons(k_11, sym_Stream_1))
        {
          c_27 = ATgetArgument(k_11, 0);
        }
      else
        _fail(t);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(c_27, d_27, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          j_27 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(j_27, k_27, t);
  e_27 = t;
  t = term_n_11;
  f_27 = t;
  t = e_27;
  if(match_cons(t, sym_Stream_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, e_27);
  t = b_5(f_27, i_27, t);
  return(t);
}
ATerm output_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  t = g_97(t);
  b_27 = t;
  {
    ATerm u_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = u_11;
        t = term_y_11;
      }
    a_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_27, b_27);
    {
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_12;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_27, b_27);
          LocalPopChoice(b_12);
          if(match_cons(t, sym__2))
            {
              ATerm d_12 = ATgetArgument(t, 0);
              ATerm e_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_5(q_3, a_27, b_27, t);
        }
      else
        {
          t = a_12;
          if(match_cons(t, sym__2))
            {
              ATerm f_12 = ATgetArgument(t, 0);
              ATerm g_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_5(r_3, a_27, b_27, t);
        }
    }
  }
  return(t);
}
ATerm c_28 (ATerm v_27, ATerm t)
{
  t = SSL_fclose(v_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_27 = ATgetArgument(t, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_27);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = c_28(a_28, t);
          }
      }
    }
  else
    {
      t = c_28(a_28, t);
    }
  return(t);
}
ATerm f_5 (ATerm e_42, ATerm t)
{
  t = SSL_read_term_from_stream(e_42);
  return(t);
}
ATerm g_5 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm j_28 = NULL;
  t = SSL_fopen(q_38, r_38);
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_stdin_stream();
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_28 = NULL;
  t = SSL_stdout_stream();
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_28);
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
ATerm l_30 (ATerm u_28, ATerm t)
{
  ATerm x_28 = NULL;
  t = SSL_explode_term(u_28);
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_12 = ATgetArgument(t, 1);
        if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
          {
            x_28 = ATgetFirst((ATermList) k_12);
            {
              ATerm l_12 = (ATerm) ATgetNext((ATermList) k_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm m_30 (ATerm a_29, ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm d_29 = NULL,f_29 = NULL,g_29 = NULL,j_29 = NULL,y_7 = NULL;
  t = SSLgetAnnotations(c_29);
  g_29 = t;
  t = a_29;
  if(match_cons(t, sym_Path_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_29, b_29);
  y_7 = t;
  t = SSLsetAnnotations(y_7, g_29);
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(d_29, f_29, t);
  return(t);
}
ATerm n_30 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,s_29 = NULL,x_29 = NULL,z_7 = NULL;
  t = SSLgetAnnotations(n_29);
  s_29 = t;
  t = SSL_is_string(l_29);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_29, m_29);
  z_7 = t;
  t = SSLsetAnnotations(z_7, s_29);
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(o_29, p_29, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm c_30 = NULL,f_30 = NULL,i_30 = NULL;
  c_30 = t;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_30(c_30, t);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm p_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_30(f_30, i_30, c_30, t);
                  ;
                  LocalPopChoice(q_12);
                }
              else
                {
                  t = p_12;
                  t = n_30(f_30, i_30, c_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_30(c_30, t);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_30 = NULL,r_30 = NULL,s_30 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_30 = NULL;
      t_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_30, term_w_12);
      t = h_5(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = debug_1_0(s_3, t);
      _fail(t);
    }
  r_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(s_30, t);
  o_30 = t;
  t = r_30;
  t = fclose_0_0(t);
  t = o_30;
  return(t);
}
ATerm input_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = term_a_13;
    }
  t = ReadFromFile_0_0(t);
  t = h_97(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  b_31 = t;
  t = term_b_13;
  t = whoami_0_0(t);
  c_31 = t;
  t = term_c_13;
  e_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_13), c_31), term_d_13);
  f_31 = t;
  t = SSL_printnl(e_31, f_31);
  t = term_f_13;
  d_31 = t;
  t = SSL_exit(d_31);
  t = b_31;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  if(match_string(t, "-k"))
    {
      t = h_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_31;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  t = SSL_string_to_int(i_31);
  j_31 = t;
  t = term_g_13;
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, j_31);
  t = p_5(k_31, j_31, t);
  t = i_31;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, a_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  if(match_string(t, "-S"))
    {
      t = m_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_31;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  t = term_j_13;
  n_31 = t;
  t = term_k_13;
  o_31 = t;
  t = term_l_13;
  t = p_5(n_31, o_31, t);
  t = term_o_13;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_p_13;
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
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  t = SSL_string_to_int(p_31);
  q_31 = t;
  t = term_j_13;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, q_31);
  t = p_5(r_31, q_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_31);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_q_13;
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
  ATerm s_31 = NULL,t_31 = NULL;
  t = term_t_13;
  s_31 = t;
  t = term_b_13;
  t_31 = t;
  t = term_u_13;
  t = p_5(s_31, t_31, t);
  t = term_v_13;
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
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, c_4, d_4, t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = Option_3_0(j_4, k_4, l_4, t);
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm u_31 = NULL;
  t = term_c_14;
  u_31 = t;
  t = SSL_table_put(u_31, f_43, g_43);
  t = (ATerm) ATmakeAppl(sym__3, term_c_14, f_43, g_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
      t = term_b_13;
      t = h_0(t);
      z_31 = t;
      t = term_d_14;
      a_32 = t;
      t = term_f_14;
      b_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_f_14, z_31);
      t = n_5(a_32, b_32, z_31, t);
      _fail(t);
    }
  else
    {
      ATerm e_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      t = d_0(t);
      t = term_b_13;
      t = g_0(t);
      e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_31), e_32);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  if(match_string(t, "-o"))
    {
      t = i_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_32;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  j_32 = t;
  t = term_x_11;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, j_32);
  t = p_5(k_32, j_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_32);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, r_4, u_4, t);
  return(t);
}
ATerm n_5 (ATerm d_48, ATerm e_48, ATerm c_48, ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_48, e_48);
  {
    ATerm i_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_14 = ATgetArgument(t, 0);
            ATerm n_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_48, e_48);
        t = m_5(d_48, e_48, t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = i_14;
        t = (ATerm) ATempty;
      }
    n_32 = t;
    t = (ATerm) ATinsert(CheckATermList(n_32), c_48);
    o_32 = t;
    t = SSL_table_put(d_48, e_48, o_32);
    t = m_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
      t = term_b_13;
      t = m_0(t);
      z_32 = t;
      t = term_d_14;
      a_33 = t;
      t = term_f_14;
      b_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_f_14, z_32);
      t = n_5(a_33, b_33, z_32, t);
      _fail(t);
    }
  else
    {
      ATerm h_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_32 = ATgetFirst((ATermList) t);
          w_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_32 = ATgetFirst((ATermList) t);
          y_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_32;
      t = k_0(t);
      t = x_32;
      t = l_0(t);
      h_33 = t;
      t = (ATerm) ATinsert(CheckATermList(y_32), h_33);
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  if(match_string(t, "-i"))
    {
      t = j_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_33;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  m_33 = t;
  t = term_z_12;
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, m_33);
  t = p_5(n_33, m_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_33);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, w_4, x_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_13;
  t = whoami_0_0(t);
  o_33 = t;
  t = term_c_13;
  q_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_14), o_33);
  r_33 = t;
  t = SSL_printnl(q_33, r_33);
  t = term_f_13;
  p_33 = t;
  t = SSL_exit(p_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_5 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_35, p_35);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      t = SSL_addr(o_35, p_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_33;
      t = d_86(t);
    }
  else
    {
      ATerm y_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_33 = ATgetFirst((ATermList) t);
          v_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_33;
      t = foldr_2_0(d_86, e_86, t);
      y_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_33, y_33);
      t = e_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(r_13, s_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_34 = NULL,m_13 = NULL,n_13 = NULL;
  t = times_0_0(t);
  n_13 = t;
  t = SSL_explode_term(n_13);
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13;
  t = foldr_2_0(k_5, o_5, t);
  b_34 = t;
  t = SSL_TicksToSeconds(b_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_34;
        if((n_34 != t))
          {
            _fail(t);
          }
        t = m_34;
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
        {
          ATerm z_14 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_34, o_34);
              ;
              LocalPopChoice(b_15);
            }
          else
            {
              t = z_14;
              t = SSL_gtr(n_34, o_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_34, term_f_13);
        t = geq_0_0(t);
        t = s_34;
        t = h_94(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = s_34;
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,z_34 = NULL,a_35 = NULL;
  t = run_time_0_0(t);
  w_34 = t;
  t = term_b_13;
  t = whoami_0_0(t);
  x_34 = t;
  t = term_c_13;
  z_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_15), w_34), term_e_15), x_34);
  a_35 = t;
  t = SSL_printnl(z_34, a_35);
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_15), w_34), term_e_15), x_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_13;
  b_35 = t;
  t = SSL_exit(b_35);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  k_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_35 = ATgetArgument(t, 0);
          {
            ATerm p_14 = NULL,c_8 = NULL;
            t = SSLgetAnnotations(k_35);
            p_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_35);
            c_8 = t;
            t = SSLsetAnnotations(c_8, p_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      t = fetch_1_0(w_5, t);
    }
  t = x_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_35 = NULL,q_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      q_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_35 = NULL,v_35 = NULL;
        ATerm x_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_35)), not_null(v_35));
          return(t);
        }
        t = q_35;
        t = j_0(t);
        if(((u_35 != NULL) && (u_35 != t)))
          _fail(t);
        else
          u_35 = t;
        t = n_35;
        t = i_0(t);
        if(((v_35 != NULL) && (v_35 != t)))
          _fail(t);
        else
          v_35 = t;
        t = q_35;
        t = reverse_acc_2_0(i_0, x_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_13;
      t = j_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,l_8 = NULL;
  b_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_36);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_36);
  l_8 = t;
  t = SSLsetAnnotations(l_8, z_35);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_36), term_j_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = fetch_1_0(y_5, t);
    }
  t = term_m_15;
  t = echo_0_0(t);
  t = term_d_14;
  x_35 = t;
  t = term_f_14;
  y_35 = t;
  t = term_n_15;
  t = m_5(x_35, y_35, t);
  t = reverse_acc_2_0(_id, z_5, t);
  t = map_1_0(a_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm b_37 (ATerm t)
  {
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
    y_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_36 = ATgetFirst((ATermList) t);
        a_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_15 = NULL,v_15 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(y_36);
          o_15 = t;
          t = z_36;
          t = k_80(t);
          v_15 = t;
          t = (ATerm) ATinsert(CheckATermList(a_37), v_15);
          n_8 = t;
          t = SSLsetAnnotations(n_8, o_15);
          ;
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          {
            ATerm f_16 = NULL,m_16 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(y_36);
            f_16 = t;
            t = a_37;
            t = b_37(t);
            m_16 = t;
            t = (ATerm) ATinsert(CheckATermList(m_16), z_36);
            o_8 = t;
            t = SSLsetAnnotations(o_8, f_16);
          }
        }
    }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_15 = ATgetFirst((ATermList) t);
                ATerm w_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_37;
          }
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        t = (ATerm) ATinsert(ATempty, f_37);
      }
    g_37 = t;
    t = term_y_11;
    h_37 = t;
    t = SSL_printnl(h_37, g_37);
    t = f_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_5 (ATerm d_33, ATerm e_33, ATerm t)
{
  t = SSL_strcat(d_33, e_33);
  return(t);
}
ATerm debug_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  l_37 = t;
  t = v_92(t);
  m_37 = t;
  t = term_c_13;
  n_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_37), m_37);
  o_37 = t;
  t = SSL_printnl(n_37, o_37);
  t = l_37;
  return(t);
}
ATerm map_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm d_38 (ATerm t)
  {
    ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
    a_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_38;
      }
    else
      {
        ATerm e_17 = NULL,q_17 = NULL,r_17 = NULL,x_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_38 = ATgetFirst((ATermList) t);
            c_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_38);
        e_17 = t;
        t = b_38;
        t = a_80(t);
        q_17 = t;
        t = c_38;
        t = d_38(t);
        r_17 = t;
        t = (ATerm) ATinsert(CheckATermList(r_17), q_17);
        x_8 = t;
        t = SSLsetAnnotations(x_8, e_17);
      }
    return(t);
  }
  t = d_38(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_38 = NULL;
      l_38 = t;
      t = SSL_is_string(l_38);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = a_16;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_6, t);
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
              x_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_38 = ATgetArgument(t, 0);
                  t = y_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_38 = ATgetArgument(t, 0);
                      t = y_38;
                      {
                        ATerm g_16 = t;
                        int h_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_16);
                          }
                        else
                          {
                            t = g_16;
                            t = debug_1_0(c_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_39 = NULL,e_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_38 = ATgetArgument(t, 0);
                          z_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_38;
                      t = eval_config_0_0(t);
                      d_39 = t;
                      t = z_38;
                      t = eval_config_0_0(t);
                      e_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_39, e_39);
                      t = l_5(d_39, e_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_5 (ATerm u_49, ATerm v_49, ATerm t)
{
  t = SSL_table_get(u_49, v_49);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL;
  i_39 = t;
  t = term_c_14;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, i_39);
  t = m_5(j_39, i_39, t);
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL,l_39 = NULL;
        t = eval_config_0_0(t);
        k_39 = t;
        t = term_c_14;
        l_39 = t;
        t = SSL_table_put(l_39, i_39, k_39);
        t = k_39;
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
      }
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  t = term_k_16;
  o_39 = t;
  t = term_b_13;
  p_39 = t;
  t = term_l_16;
  t = p_5(o_39, p_39, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  t = term_k_16;
  s_39 = t;
  t = term_b_13;
  t_39 = t;
  t = term_l_16;
  t = p_5(s_39, t_39, t);
  t = term_o_16;
  q_39 = t;
  t = term_b_13;
  r_39 = t;
  t = term_p_16;
  t = p_5(q_39, r_39, t);
  t = term_q_16;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_r_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, f_6, h_6, t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = s_16;
      t = Option_3_0(i_6, j_6, k_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_59 (ATerm), ATerm m_59 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,z_8 = NULL;
  z_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      w_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_39);
  u_39 = t;
  t = v_39;
  t = l_59(t);
  x_39 = t;
  t = w_39;
  t = m_59(t);
  y_39 = t;
  t = (ATerm) ATinsert(CheckATermList(y_39), x_39);
  z_8 = t;
  t = SSLsetAnnotations(z_8, u_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,j_40 = NULL,k_40 = NULL,d_9 = NULL;
  e_40 = t;
  {
    ATerm x_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_17;
        t = a_99(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = x_16;
      }
    t = e_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_40 = ATgetFirst((ATermList) t);
        h_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_40);
    f_40 = t;
    t = term_t_14;
    k_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_14, g_40);
    t = p_5(k_40, g_40, t);
    t = h_40;
    {
      ATerm u_40 (ATerm t)
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_40 = NULL;
                n_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_40;
                ;
                LocalPopChoice(f_17);
              }
            else
              {
                t = d_17;
                t = a_99(t);
                t = Cons_2_0(_id, u_40, t);
              }
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm q_40 = NULL,r_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_40 = ATgetFirst((ATermList) t);
                  r_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATmakeAppl(sym_Undefined_1, q_40));
            }
          }
        return(t);
      }
      t = u_40(t);
      j_40 = t;
      t = (ATerm) ATinsert(CheckATermList(j_40), (ATerm) ATmakeAppl(sym_Program_1, g_40));
      d_9 = t;
      t = SSLsetAnnotations(d_9, f_40);
    }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  if(match_string(t, "--help"))
    {
      t = g_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_41;
        }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  t = term_i_15;
  h_41 = t;
  t = term_b_13;
  i_41 = t;
  t = term_g_17;
  t = p_5(h_41, i_41, t);
  t = term_h_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  b_41 = t;
  t = term_d_14;
  d_41 = t;
  t = term_f_14;
  e_41 = t;
  t = (ATerm) ATempty;
  f_41 = t;
  t = SSL_table_put(d_41, e_41, f_41);
  t = b_41;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm l_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_98(t);
          ;
          LocalPopChoice(n_17);
        }
      else
        {
          t = l_17;
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_6, n_6, p_6, t);
                ;
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_6, t);
    {
      ATerm s_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_41 = NULL;
          p_41 = t;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_18 = NULL;
                t = p_41;
                {
                  ATerm w_17 = t;
                  int x_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_17);
                    }
                  else
                    {
                      t = w_17;
                      t = fetch_1_0(q_6, t);
                    }
                  t = p_41;
                  t = default_system_usage_0_0(t);
                  t = term_k_13;
                  l_18 = t;
                  t = SSL_exit(l_18);
                }
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                {
                  ATerm p_18 = NULL;
                  t = term_k_16;
                  t = get_config_0_0(t);
                  t = p_41;
                  t = default_system_about_0_0(t);
                  t = term_k_13;
                  p_18 = t;
                  t = SSL_exit(p_18);
                }
              }
          }
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = s_17;
          {
            ATerm y_17 = t;
            int z_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
                ATerm s_6 (ATerm t)
                {
                  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,g_9 = NULL;
                  v_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_41);
                  t_41 = t;
                  t = u_41;
                  if(((z_40 != NULL) && (z_40 != t)))
                    _fail(t);
                  else
                    z_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_41);
                  g_9 = t;
                  t = SSLsetAnnotations(g_9, t_41);
                  return(t);
                }
                t = fetch_1_0(s_6, t);
                t = term_c_13;
                r_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_40)), term_a_18);
                s_41 = t;
                t = SSL_printnl(r_41, s_41);
                t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_40)), term_a_18));
                t = default_system_usage_0_0(t);
                t = term_f_13;
                q_41 = t;
                t = SSL_exit(q_41);
                ;
                LocalPopChoice(z_17);
              }
            else
              {
                t = y_17;
              }
          }
        }
      a_41 = t;
      t = term_d_14;
      c_41 = t;
      t = SSL_table_destroy(c_41);
      t = a_41;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  t = parse_options_1_0(z_96, t);
  h_42 = t;
  t = term_b_18;
  k_42 = t;
  t = SSL_table_create(k_42);
  t = term_b_18;
  i_42 = t;
  t = term_c_18;
  j_42 = t;
  t = SSL_table_put(i_42, j_42, h_42);
  t = h_42;
  t = b_97(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_97, t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_6, b_7, g_7, t);
                  ;
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  {
                    ATerm o_18 = t;
                    int q_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(q_18);
                      }
                    else
                      {
                        t = o_18;
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
ATerm u_6 (ATerm t)
{
  t = input_1_0(i_7, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_c_12;
  m_42 = t;
  t = term_b_13;
  n_42 = t;
  t = term_r_18;
  t = p_5(m_42, n_42, t);
  t = term_s_18;
  return(t);
}
ATerm g_7 (ATerm t)
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
  t = option_wrap_4_0(t_6, default_usage_0_0, _id, u_6, t);
  return(t);
}
