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
ATerm term_s_22;
ATerm term_r_22;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_d_20;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_j_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_z_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
void init_constant_terms (void)
{
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Sort_2, term_j_12, (ATerm) ATempty);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__3, term_n_14, term_q_17, term_i_14);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm diff_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm x_2 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm free_vars_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm worker_wrapper_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_18 (ATerm w_17, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm worker_wrapper_spec_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_104 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm output_1_0 (ATerm h_109 (ATerm), ATerm);
ATerm e_20 (ATerm y_19, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm _2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm g_6 (ATerm);
ATerm k_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_106 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm need_help_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_84 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_111 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm parse_options_1_0 (ATerm a_111 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
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
ATerm diff_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  if(match_cons(t, sym__2))
    {
      c_0 = ATgetArgument(t, 0);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_0;
  {
    ATerm k_0 (ATerm t)
    {
      ATerm r_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_8);
        }
      else
        {
          t = r_8;
          {
            ATerm t_8 = t;
            int u_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_0 = NULL,p_0 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_0 = ATgetFirst((ATermList) t);
                    p_0 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_0;
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_0, w_0);
                    t = g_96(t);
                    return(t);
                  }
                  t = fetch_1_0(q_2, t);
                  t = p_0;
                  t = k_0(t);
                }
                ;
                LocalPopChoice(u_8);
              }
            else
              {
                t = t_8;
                t = Cons_2_0(_id, k_0, t);
              }
          }
        }
      return(t);
    }
    t = k_0(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_94(t);
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = l_94(t);
        t = _2_0(n_94, l_0, t);
        t = m_94(t);
      }
    return(t);
  }
  t = l_0(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
        _fail(t);
      {
        ATerm y_8 = ATgetArgument(t, 1);
        if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
        {
          x_0 = ATgetFirst((ATermList) z_8);
          a_1 = (ATerm) ATgetNext((ATermList) z_8);
        }
      else
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
          {
            z_0 = ATgetFirst((ATermList) b_9);
            c_1 = (ATerm) ATgetNext((ATermList) b_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_0, z_0), (ATerm) ATmakeAppl(sym__2, a_1, c_1));
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_1), d_1);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm m_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_9 = ATgetFirst((ATermList) t);
      if(match_cons(c_9, sym__2))
        {
          m_0 = ATgetArgument(c_9, 0);
          q_0 = ATgetArgument(c_9, 1);
        }
      else
        _fail(t);
      r_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_0);
  if(match_cons(t, sym__2))
    {
      if((s_0 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, t_0);
  t = genzip_4_0(r_2, s_2, x_2, _id, t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, r_0);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_86(t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = i_86(t);
        t = g_1(t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm for_3_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  t = k_86(t);
  t = while_not_2_0(l_86, m_86, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_1);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = _2_0(_id, c_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, d_3, t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,o_2 = NULL;
        if(match_cons(t, sym__2))
          {
            j_2 = ATgetArgument(t, 0);
            l_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_2;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_2 = ATgetFirst((ATermList) t);
            o_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_2), m_2), o_2);
      }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm h_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_1 = ATgetFirst((ATermList) t);
          e_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_1;
      if(match_cons(t, sym__2))
        {
          b_2 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_2;
      if((b_2 != t))
        {
          _fail(t);
        }
      t = e_2;
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = h_9;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      if((t_2 != ATgetArgument(t, 1)))
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_2, z_2, a_3, t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = diff_1_0(e_3, t);
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,b_3 = NULL,n_0 = NULL,y_0 = NULL;
  b_3 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_3);
  u_2 = t;
  t = v_2;
  t = r_75(t);
  w_2 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_2);
  n_0 = t;
  t = SSLsetAnnotations(n_0, u_2);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,b_1 = NULL,j_1 = NULL;
  t_3 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
      m_3 = ATgetArgument(t, 2);
      n_3 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_3);
  f_3 = t;
  t = g_3;
  t = i_75(t);
  p_3 = t;
  t = h_3;
  t = j_75(t);
  q_3 = t;
  t = m_3;
  t = k_75(t);
  r_3 = t;
  t = n_3;
  t = l_75(t);
  s_3 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, p_3, q_3, r_3, s_3);
  b_1 = t;
  t = SSLsetAnnotations(b_1, f_3);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,f_4 = NULL,g_4 = NULL,j_4 = NULL,j_5 = NULL,s_5 = NULL,z_5 = NULL,k_1 = NULL,l_1 = NULL;
  z_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      c_4 = ATgetArgument(t, 2);
      f_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_5);
  y_3 = t;
  t = z_3;
  t = c_79(t);
  g_4 = t;
  t = b_4;
  t = d_79(t);
  j_4 = t;
  t = c_4;
  t = e_79(t);
  j_5 = t;
  t = f_4;
  t = f_79(t);
  s_5 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_4, j_4, j_5, s_5);
  k_1 = t;
  t = SSLsetAnnotations(k_1, y_3);
  return(t);
}
ATerm Scope_2_0 (ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,m_6 = NULL,n_1 = NULL,o_1 = NULL;
  m_6 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  e_6 = t;
  t = f_6;
  t = u_76(t);
  i_6 = t;
  t = h_6;
  t = v_76(t);
  j_6 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, i_6, j_6);
  n_1 = t;
  t = SSLsetAnnotations(n_1, e_6);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_114, o_114, t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(q_114, q_114, q_114, o_114, t);
            ;
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            {
              ATerm q_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(q_114, q_114, q_114, o_114, t);
                  ;
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = q_9;
                  t = DynamicRules_1_0(o_114, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm a_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_7);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm s_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = s_9;
      {
        ATerm c_7 = NULL,f_7 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_7 = ATgetArgument(t, 0);
            t = c_7;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm v_9 = t;
            int x_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm z_9 = ATgetArgument(t, 0);
                    ATerm a_10 = ATgetArgument(t, 1);
                    f_7 = ATgetArgument(t, 2);
                    {
                      ATerm b_10 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_9);
                t = f_7;
                t = map_1_0(k_3, t);
              }
            else
              {
                t = v_9;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm c_10 = ATgetArgument(t, 0);
                    ATerm d_10 = ATgetArgument(t, 1);
                    f_7 = ATgetArgument(t, 2);
                    {
                      ATerm e_10 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = f_7;
                t = map_1_0(l_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm o_7 = NULL;
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_7 = ATgetArgument(t, 0);
          {
            ATerm h_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_10);
      t = o_7;
    }
  else
    {
      t = f_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_7;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm z_7 = NULL;
  ATerm i_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_7 = ATgetArgument(t, 0);
          {
            ATerm l_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_10);
      t = z_7;
    }
  else
    {
      t = i_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_7;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm t_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_9);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm w_9 = NULL,y_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_9 = ATgetArgument(t, 0);
            t = w_9;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm o_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm q_10 = ATgetArgument(t, 0);
                    ATerm s_10 = ATgetArgument(t, 1);
                    y_9 = ATgetArgument(t, 2);
                    {
                      ATerm t_10 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_10);
                t = y_9;
                t = map_1_0(v_3, t);
              }
            else
              {
                t = o_10;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm u_10 = ATgetArgument(t, 0);
                    ATerm v_10 = ATgetArgument(t, 1);
                    y_9 = ATgetArgument(t, 2);
                    {
                      ATerm w_10 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_9;
                t = map_1_0(w_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm j_10 = NULL;
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_10 = ATgetArgument(t, 0);
          {
            ATerm z_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_10);
      t = j_10;
    }
  else
    {
      t = x_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_10;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_10 = ATgetArgument(t, 0);
          {
            ATerm c_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_11);
      t = r_10;
    }
  else
    {
      t = a_11;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      i_9 = ATgetArgument(t, 0);
      t = i_9;
      if(match_cons(t, sym_Rule_3))
        {
          a_9 = ATgetArgument(t, 0);
          {
            ATerm d_11 = ATgetArgument(t, 1);
          }
          {
            ATerm e_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_9;
      t = free_vars_3_0(o_3, u_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          i_9 = ATgetArgument(t, 0);
          {
            ATerm f_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_9;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11;
  {
    ATerm m_11 (ATerm t)
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_11;
          ;
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          {
            ATerm i_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_1 = NULL,h_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_1 = ATgetFirst((ATermList) t);
                    h_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_11;
                {
                  ATerm x_3 (ATerm t)
                  {
                    ATerm i_1 = NULL;
                    i_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_1, i_1);
                    t = l_96(t);
                    return(t);
                  }
                  t = fetch_1_0(x_3, t);
                  t = h_1;
                  t = m_11(t);
                }
                ;
                LocalPopChoice(j_11);
              }
            else
              {
                t = i_11;
                t = Cons_2_0(_id, m_11, t);
              }
          }
        }
      return(t);
    }
    t = m_11(t);
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = union_1_0(t_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      if((y_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = union_1_0(x_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      if((n_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_13 (ATerm t)
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_113(t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_12 = NULL,u_12 = NULL,q_1 = NULL,t_1 = NULL;
              n_12 = t;
              t = n_113(t);
              u_12 = t;
              t = n_12;
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm m_1 = NULL;
                  t = h_13(t);
                  m_1 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_1, u_12);
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_113(n_4, h_13, p_4, t);
                q_1 = t;
                t = SSL_explode_term(q_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_11 = ATgetArgument(t, 0);
                    t_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_1;
                t = foldr_3_0(r_4, s_4, _id, t);
              }
              ;
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              {
                ATerm z_1 = NULL,a_2 = NULL;
                z_1 = t;
                t = SSL_explode_term(z_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_11 = ATgetArgument(t, 0);
                    a_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_2;
                t = foldr_3_0(u_4, v_4, h_13, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_13(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm m_4 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_4);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm o_4 = NULL,q_4 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_4 = ATgetArgument(t, 0);
            t = o_4;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm v_11 = t;
            int w_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm x_11 = ATgetArgument(t, 0);
                    ATerm y_11 = ATgetArgument(t, 1);
                    q_4 = ATgetArgument(t, 2);
                    {
                      ATerm z_11 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(w_11);
                t = q_4;
                t = map_1_0(a_5, t);
              }
            else
              {
                t = v_11;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm a_12 = ATgetArgument(t, 0);
                    ATerm b_12 = ATgetArgument(t, 1);
                    q_4 = ATgetArgument(t, 2);
                    {
                      ATerm c_12 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_4;
                t = map_1_0(b_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm w_4 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_4 = ATgetArgument(t, 0);
          {
            ATerm f_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_12);
      t = w_4;
    }
  else
    {
      t = d_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_4;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm c_5 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_5 = ATgetArgument(t, 0);
          {
            ATerm i_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_12);
      t = c_5;
    }
  else
    {
      t = g_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_5;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm f_5 = NULL;
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_5, term_l_12);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm g_5 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_5 = ATgetArgument(t, 0);
      {
        ATerm m_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_5), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm h_5 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_5 = ATgetArgument(t, 0);
      {
        ATerm o_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_5);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm l_16 = NULL,o_16 = NULL,r_16 = NULL,v_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  o_16 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
      x_16 = ATgetArgument(t, 2);
      a_17 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_17;
  if(match_cons(t, sym_Seq_2))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      t = b_17;
      if(match_cons(t, sym_Match_1))
        {
          l_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, r_16, v_16, x_16, (ATerm) ATmakeAppl(sym_ScopeDefault_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_16), c_17)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm a_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          b_17 = ATgetArgument(t, 0);
          c_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_17;
      if(match_cons(t, sym_Seq_2))
        {
          d_17 = ATgetArgument(t, 0);
          f_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_17;
      if(match_cons(t, sym_Match_1))
        {
          e_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_17;
      if(match_cons(t, sym_Op_2))
        {
          ATerm p_12 = ATgetArgument(t, 0);
          ATerm q_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_17;
      t = free_vars_3_0(y_4, z_4, tboundin_3_0, t);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_17, a_4);
      t = diff_0_0(t);
      d_4 = t;
      t = a_4;
      t = map_1_0(d_5, t);
      e_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_16, e_4);
      t = conc_0_0(t);
      h_4 = t;
      t = new_0_0(t);
      i_4 = t;
      t = v_16;
      t = map_1_0(e_5, t);
      k_4 = t;
      t = h_4;
      t = map_1_0(i_5, t);
      l_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_4, v_16, h_4, (ATerm) ATmakeAppl(sym_Scope_2, d_4, f_17))), (ATerm) ATmakeAppl(sym_SDefT_4, r_16, v_16, x_16, (ATerm) ATmakeAppl(sym_Scope_2, a_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_17), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_4), k_4, l_4)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm t_17 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_17, t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_92(t);
      }
    return(t);
  }
  t = t_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = t_12;
      {
        ATerm o_17 = NULL,p_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_17 = ATgetFirst((ATermList) t);
            p_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_17;
        {
          ATerm k_5 (ATerm t)
          {
            t = p_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_5, t);
        }
      }
    }
  return(t);
}
ATerm e_18 (ATerm w_17, ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_explode_term(w_17);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_17;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              t = a_18;
              return(t);
            }
            t = z_17;
            t = at_end_1_0(l_5, t);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = e_18(b_18, t);
          }
      }
    }
  else
    {
      t = e_18(b_18, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_98(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm h_18 = NULL,i_18 = NULL,l_18 = NULL,m_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_18 = ATgetFirst((ATermList) t);
            i_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_18;
        t = o_98(t);
        l_18 = t;
        t = i_18;
        t = foldr_3_0(m_98, n_98, o_98, t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, m_18);
        t = n_98(t);
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,p_1 = NULL,s_1 = NULL;
  q_18 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  n_18 = t;
  t = o_18;
  t = x_71(t);
  p_18 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_18);
  p_1 = t;
  t = SSLsetAnnotations(p_1, n_18);
  return(t);
}
ATerm Specification_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,u_1 = NULL,v_1 = NULL;
  z_18 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  w_18 = t;
  t = x_18;
  t = c_72(t);
  y_18 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_18);
  u_1 = t;
  t = SSLsetAnnotations(u_1, w_18);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = Cons_2_0(_id, n_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = Cons_2_0(o_5, p_5, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = Strategies_1_0(q_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = foldr_3_0(_id, conc_0_0, r_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm c_19 = NULL;
        c_19 = t;
        t = (ATerm) ATinsert(ATempty, c_19);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  t = Specification_1_0(m_5, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_19, term_d_13);
  t = open_stream_0_0(t);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_19, f_19);
  t = y_104(t);
  t = fclose_0_0(t);
  t = f_19;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(match_cons(e_13, sym_Stream_1))
        {
          j_19 = ATgetArgument(e_13, 0);
        }
      else
        _fail(t);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(j_19, k_19);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_19);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(match_cons(f_13, sym_Stream_1))
        {
          m_19 = ATgetArgument(f_13, 0);
        }
      else
        _fail(t);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(m_19, n_19);
  o_19 = t;
  t = term_g_13;
  p_19 = t;
  t = SSL_fputc(p_19, o_19);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_19);
  return(t);
}
ATerm output_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  t = h_109(t);
  h_19 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_13;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = term_l_13;
      }
    i_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_19, h_19);
    {
      ATerm m_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_13;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, i_19, h_19);
          LocalPopChoice(n_13);
          t = WriteToFile_1_0(t_5, t);
        }
      else
        {
          t = m_13;
          t = WriteToFile_1_0(u_5, t);
        }
    }
  }
  return(t);
}
ATerm e_20 (ATerm y_19, ATerm t)
{
  t = SSL_fclose(y_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  c_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_20 = ATgetArgument(t, 0);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_20);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = e_20(c_20, t);
          }
      }
    }
  else
    {
      t = e_20(c_20, t);
    }
  return(t);
}
ATerm _2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,w_1 = NULL,d_2 = NULL;
  k_20 = t;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  f_20 = t;
  t = g_20;
  t = e_67(t);
  i_20 = t;
  t = h_20;
  t = f_67(t);
  j_20 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, j_20);
  w_1 = t;
  t = SSLsetAnnotations(w_1, f_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_20 = NULL;
  t = SSL_stdin_stream();
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  t = SSL_stdout_stream();
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_20 = NULL;
  t = SSL_stderr_stream();
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_20);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm x_20 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_20;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_is_string(b_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      ATerm s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL,y_5 = NULL;
        x_5 = t;
        t = SSL_explode_term(x_5);
        if(match_cons(t, sym__2))
          {
            ATerm v_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_13 = ATgetArgument(t, 1);
              if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
                {
                  y_5 = ATgetFirst((ATermList) w_13);
                  {
                    ATerm x_13 = (ATerm) ATgetNext((ATermList) w_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
              t = _2_0(v_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_20 = ATgetArgument(t, 0);
                  v_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_20, v_20);
              w_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_20);
              ;
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              {
                ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
                t = _2_0(w_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_20 = ATgetArgument(t, 0);
                    z_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_20, z_20);
                a_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL;
      f_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_21, term_d_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = debug_1_0(c_6, t);
      _fail(t);
    }
  c_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_21);
  d_21 = t;
  t = c_21;
  t = fclose_0_0(t);
  t = d_21;
  return(t);
}
ATerm input_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      t = term_h_14;
    }
  t = ReadFromFile_0_0(t);
  t = i_109(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  h_21 = t;
  t = term_i_14;
  t = whoami_0_0(t);
  i_21 = t;
  t = term_j_14;
  j_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_14), i_21), term_k_14);
  k_21 = t;
  t = SSL_printnl(j_21, k_21);
  t = term_m_14;
  l_21 = t;
  t = SSL_exit(l_21);
  t = h_21;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  if(match_string(t, "-k"))
    {
      t = n_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  o_21 = t;
  t = SSL_string_to_int(o_21);
  p_21 = t;
  t = term_n_14;
  q_21 = t;
  t = term_o_14;
  r_21 = t;
  t = SSL_table_put(q_21, r_21, p_21);
  t = o_21;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, g_6, k_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  if(match_string(t, "-S"))
    {
      t = t_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_21;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  t = term_n_14;
  u_21 = t;
  t = term_q_14;
  v_21 = t;
  t = term_r_14;
  w_21 = t;
  t = SSL_table_put(u_21, v_21, w_21);
  t = term_s_14;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  x_21 = t;
  t = SSL_string_to_int(x_21);
  y_21 = t;
  t = term_n_14;
  z_21 = t;
  t = term_q_14;
  a_22 = t;
  t = SSL_table_put(z_21, a_22, y_21);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_21);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  t = term_n_14;
  b_22 = t;
  t = term_v_14;
  c_22 = t;
  t = term_i_14;
  d_22 = t;
  t = SSL_table_put(b_22, c_22, d_22);
  t = term_w_14;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_6, p_6, q_6, t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_6, s_6, t_6, t);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            t = Option_3_0(u_6, v_6, w_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_22 = NULL;
      t = term_i_14;
      t = d_0(t);
      i_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, i_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_22 = ATgetFirst((ATermList) t);
          h_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_22;
      t = a_0(t);
      t = term_i_14;
      t = b_0(t);
      l_22 = t;
      t = (ATerm) ATinsert(CheckATermList(h_22), l_22);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  if(match_string(t, "-o"))
    {
      t = n_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_22;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  o_22 = t;
  t = term_n_14;
  p_22 = t;
  t = term_k_13;
  q_22 = t;
  t = SSL_table_put(p_22, q_22, o_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_22);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_e_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, y_6, z_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__3))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      v_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            ATerm i_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_22, u_22);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = (ATerm) ATempty;
      }
    w_22 = t;
    t = (ATerm) ATinsert(CheckATermList(w_22), v_22);
    x_22 = t;
    t = SSL_table_put(t_22, u_22, x_22);
    t = (ATerm) ATmakeAppl(sym__3, t_22, u_22, v_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_23 = NULL;
      t = term_i_14;
      t = j_0(t);
      j_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_15, term_d_15, j_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_23 = ATgetFirst((ATermList) t);
          g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      t = h_0(t);
      t = h_23;
      t = i_0(t);
      n_23 = t;
      t = (ATerm) ATinsert(CheckATermList(i_23), n_23);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  if(match_string(t, "-i"))
    {
      t = p_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_23;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  t = term_n_14;
  r_23 = t;
  t = term_g_14;
  s_23 = t;
  t = SSL_table_put(r_23, s_23, q_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_23);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_7, d_7, e_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_14;
  t = whoami_0_0(t);
  t_23 = t;
  t = term_j_14;
  u_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_15), t_23);
  v_23 = t;
  t = SSL_printnl(u_23, v_23);
  t = term_m_14;
  w_23 = t;
  t = SSL_exit(w_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_15;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_98(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm z_23 = NULL,a_24 = NULL,d_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_23 = ATgetFirst((ATermList) t);
            a_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_24;
        t = foldr_2_0(k_98, l_98, t);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_23, d_24);
        t = l_98(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm l_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_6, o_6);
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = SSL_addr(l_6, o_6);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_24 = NULL,a_6 = NULL,b_6 = NULL;
  t = times_0_0(t);
  a_6 = t;
  t = SSL_explode_term(a_6);
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6;
  t = foldr_2_0(g_7, h_7, t);
  g_24 = t;
  t = SSL_TicksToSeconds(g_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_24;
        if((s_24 != t))
          {
            _fail(t);
          }
        t = r_24;
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = r_24;
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_24, t_24);
              ;
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              t = SSL_gtr(s_24, t_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_24, t_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL,y_24 = NULL;
      w_24 = t;
      t = term_q_14;
      t = get_config_0_0(t);
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_24, term_m_14);
      t = geq_0_0(t);
      t = w_24;
      t = i_106(t);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  t = run_time_0_0(t);
  a_25 = t;
  t = term_i_14;
  t = whoami_0_0(t);
  b_25 = t;
  t = term_j_14;
  c_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), a_25), term_x_15), b_25);
  d_25 = t;
  t = SSL_printnl(c_25, d_25);
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), a_25), term_x_15), b_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_14;
  e_25 = t;
  t = SSL_exit(e_25);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = fetch_1_0(j_7, t);
    }
  t = y_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_25 = ATgetFirst((ATermList) t);
      h_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_25 = NULL,m_25 = NULL;
        t = h_25;
        t = g_0(t);
        l_25 = t;
        t = g_25;
        t = f_0(t);
        m_25 = t;
        t = h_25;
        {
          ATerm k_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_25), m_25);
            return(t);
          }
          t = reverse_acc_2_0(f_0, k_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_14;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,f_2 = NULL,g_2 = NULL;
  q_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_25);
  n_25 = t;
  t = o_25;
  t = q_84(t);
  p_25 = t;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_25);
  f_2 = t;
  t = SSLsetAnnotations(f_2, n_25);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_25), term_g_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = fetch_1_0(l_7, t);
    }
  t = term_j_16;
  t = echo_0_0(t);
  t = term_c_15;
  t_25 = t;
  t = term_d_15;
  u_25 = t;
  t = SSL_table_get(t_25, u_25);
  t = reverse_acc_2_0(_id, m_7, t);
  t = map_1_0(n_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,h_2 = NULL,i_2 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  w_25 = t;
  t = x_25;
  t = r_84(t);
  y_25 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_25);
  h_2 = t;
  t = SSLsetAnnotations(h_2, w_25);
  return(t);
}
ATerm fetch_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm c_26 (ATerm t)
  {
    ATerm k_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_92, _id, t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = k_16;
        t = Cons_2_0(_id, c_26, t);
      }
    return(t);
  }
  t = c_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  {
    ATerm n_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_16 = ATgetFirst((ATermList) t);
                ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_26;
          }
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = n_16;
        t = (ATerm) ATinsert(ATempty, e_26);
      }
    f_26 = t;
    t = term_l_13;
    g_26 = t;
    t = SSL_printnl(g_26, f_26);
    t = e_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  k_26 = t;
  t = w_104(t);
  l_26 = t;
  t = term_j_14;
  m_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_26), l_26);
  n_26 = t;
  t = SSL_printnl(m_26, n_26);
  t = k_26;
  return(t);
}
ATerm map_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm o_26 (ATerm t)
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = Cons_2_0(h_92, o_26, t);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm w_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = w_16;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_26 = NULL;
      v_26 = t;
      t = SSL_is_string(v_26);
      ;
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
            t = map_1_0(p_7, t);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
              g_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_27 = ATgetArgument(t, 0);
                  t = h_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_27 = ATgetArgument(t, 0);
                      t = h_27;
                      {
                        ATerm k_17 = t;
                        int l_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_17);
                          }
                        else
                          {
                            t = k_17;
                            t = debug_1_0(q_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_8 = NULL,g_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_27 = ATgetArgument(t, 0);
                          i_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_27;
                      t = eval_config_0_0(t);
                      f_8 = t;
                      t = i_27;
                      t = eval_config_0_0(t);
                      g_8 = t;
                      t = SSL_strcat(f_8, g_8);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  n_27 = t;
  t = term_n_14;
  o_27 = t;
  t = SSL_table_get(o_27, n_27);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_27 = NULL,q_27 = NULL;
        t = eval_config_0_0(t);
        p_27 = t;
        t = term_n_14;
        q_27 = t;
        t = SSL_table_put(q_27, n_27, p_27);
        t = p_27;
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = term_n_14;
  r_27 = t;
  t = term_q_17;
  s_27 = t;
  t = term_i_14;
  t_27 = t;
  t = SSL_table_put(r_27, s_27, t_27);
  t = term_r_17;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  t = term_n_14;
  u_27 = t;
  t = term_q_17;
  v_27 = t;
  t = term_i_14;
  w_27 = t;
  t = SSL_table_put(u_27, v_27, w_27);
  t = term_n_14;
  x_27 = t;
  t = term_u_17;
  y_27 = t;
  t = term_i_14;
  z_27 = t;
  t = SSL_table_put(x_27, y_27, z_27);
  t = term_v_17;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_7, s_7, t_7, t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      t = Option_3_0(u_7, v_7, w_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,k_2 = NULL,p_2 = NULL;
  f_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_28 = ATgetFirst((ATermList) t);
      c_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_28);
  a_28 = t;
  t = b_28;
  t = t_71(t);
  d_28 = t;
  t = c_28;
  t = u_71(t);
  e_28 = t;
  p_2 = t;
  t = (ATerm) ATinsert(CheckATermList(e_28), d_28);
  k_2 = t;
  t = SSLsetAnnotations(k_2, a_28);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  t = term_n_14;
  l_28 = t;
  t = term_l_15;
  m_28 = t;
  t = SSL_table_put(l_28, m_28, k_28);
  t = (ATerm) ATmakeAppl(sym_Program_1, k_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_18;
        t = b_111(t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
      }
    t = j_28;
    {
      ATerm y_7 (ATerm t)
      {
        ATerm k_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18 = t;
            int t_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_18);
              }
            else
              {
                t = s_18;
                t = b_111(t);
                t = Cons_2_0(_id, y_7, t);
              }
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = k_18;
            {
              ATerm o_28 = NULL,p_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_28 = ATgetFirst((ATermList) t);
                  p_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_28), (ATerm) ATmakeAppl(sym_Undefined_1, o_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_7, y_7, t);
    }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  if(match_string(t, "--help"))
    {
      t = d_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_29;
        }
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  t = term_n_14;
  e_29 = t;
  t = term_f_16;
  f_29 = t;
  t = term_i_14;
  g_29 = t;
  t = SSL_table_put(e_29, f_29, g_29);
  t = term_u_18;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm e_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  w_28 = t;
  t = term_c_15;
  x_28 = t;
  t = term_d_15;
  y_28 = t;
  t = (ATerm) ATempty;
  z_28 = t;
  t = SSL_table_put(x_28, y_28, z_28);
  t = w_28;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm a_19 = t;
      int b_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_111(t);
          ;
          LocalPopChoice(b_19);
        }
      else
        {
          t = a_19;
          {
            ATerm d_19 = t;
            int r_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, c_8, d_8, t);
                ;
                LocalPopChoice(r_19);
              }
            else
              {
                t = d_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_29 = NULL;
          n_29 = t;
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_8 = NULL;
                t = n_29;
                {
                  ATerm w_19 = t;
                  int x_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_16;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_19);
                    }
                  else
                    {
                      t = w_19;
                      t = fetch_1_0(e_8, t);
                    }
                  t = n_29;
                  t = default_system_usage_0_0(t);
                  t = term_r_14;
                  m_8 = t;
                  t = SSL_exit(m_8);
                }
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                {
                  ATerm q_8 = NULL;
                  t = term_q_17;
                  t = get_config_0_0(t);
                  t = n_29;
                  t = default_system_about_0_0(t);
                  t = term_r_14;
                  q_8 = t;
                  t = SSL_exit(q_8);
                }
              }
          }
          ;
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
                ATerm h_8 (ATerm t)
                {
                  ATerm i_8 (ATerm t)
                  {
                    if(((a_29 != NULL) && (a_29 != t)))
                      _fail(t);
                    else
                      a_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_8, t);
                  return(t);
                }
                t = fetch_1_0(h_8, t);
                t = term_j_14;
                o_29 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_29)), term_d_20);
                p_29 = t;
                t = SSL_printnl(o_29, p_29);
                t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_29)), term_d_20));
                t = default_system_usage_0_0(t);
                t = term_m_14;
                q_29 = t;
                t = SSL_exit(q_29);
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
              }
          }
        }
      b_29 = t;
      t = term_c_15;
      c_29 = t;
      t = SSL_table_destroy(c_29);
      t = b_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  t = parse_options_1_0(a_109, t);
  t_29 = t;
  t = term_l_20;
  u_29 = t;
  t = SSL_table_create(u_29);
  t = term_l_20;
  v_29 = t;
  t = term_m_20;
  w_29 = t;
  t = SSL_table_put(v_29, w_29, t_29);
  t = t_29;
  t = c_109(t);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_109, t);
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_109(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm g_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = g_21;
      {
        ATerm s_21 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(e_22);
          }
        else
          {
            t = s_21;
            {
              ATerm f_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_8, n_8, o_8, t);
                  ;
                  LocalPopChoice(j_22);
                }
              else
                {
                  t = f_22;
                  {
                    ATerm k_22 = t;
                    int m_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(m_22);
                      }
                    else
                      {
                        t = k_22;
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
ATerm k_8 (ATerm t)
{
  t = input_1_0(p_8, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  t = term_n_14;
  x_29 = t;
  t = term_o_13;
  y_29 = t;
  t = term_i_14;
  z_29 = t;
  t = SSL_table_put(x_29, y_29, z_29);
  t = term_r_22;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_8, default_usage_0_0, _id, k_8, t);
  return(t);
}
