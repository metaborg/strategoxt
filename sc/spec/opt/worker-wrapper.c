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
Symbol sym_Var_1;
Symbol sym_Var_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
ATerm term_i_33;
ATerm term_h_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
void init_constant_terms (void)
{
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Var_1, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__3, term_d_27, term_l_31, term_i_28);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm diff_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm);
ATerm k_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm);
ATerm for_3_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm j_75 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm d_96 (ATerm), ATerm);
ATerm v_15 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm free_vars_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm u_16 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm h_17 (ATerm);
ATerm worker_wrapper_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_14 (ATerm i_14, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm k_17 (ATerm);
ATerm x_17 (ATerm);
ATerm a_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm j_18 (ATerm);
ATerm worker_wrapper_spec_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_104 (ATerm), ATerm);
ATerm k_18 (ATerm);
ATerm o_18 (ATerm);
ATerm output_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm v_16 (ATerm p_16, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm _2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_18 (ATerm);
ATerm r_18 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm a_19 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm e_19 (ATerm);
ATerm f_19 (ATerm);
ATerm g_19 (ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm q_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm e_20 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_20 (ATerm);
ATerm need_help_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_84 (ATerm), ATerm);
ATerm h_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm map_1_0 (ATerm z_91 (ATerm), ATerm);
ATerm l_20 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm r_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm);
ATerm s_20 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_110 (ATerm), ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm b_21 (ATerm);
ATerm d_21 (ATerm);
ATerm parse_options_1_0 (ATerm s_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm s_21 (ATerm);
ATerm t_21 (ATerm);
ATerm z_21 (ATerm);
ATerm a_22 (ATerm);
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
ATerm diff_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  if(match_cons(t, sym__2))
    {
      b_0 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_0;
  {
    ATerm k_0 (ATerm t)
    {
      ATerm e_14 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(c_22);
        }
      else
        {
          t = e_14;
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
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
                t = f_0;
                {
                  ATerm j_14 (ATerm t)
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_0, w_0);
                    t = y_95(t);
                    return(t);
                  }
                  t = fetch_1_0(j_14, t);
                  t = p_0;
                  t = k_0(t);
                }
                ;
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
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
ATerm genzip_4_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_94(t);
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = d_94(t);
        t = _2_0(f_94, l_0, t);
        t = e_94(t);
      }
    return(t);
  }
  t = l_0(t);
  return(t);
}
ATerm k_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if(((ATgetType(j_22) != AT_LIST) || !(ATisEmpty(j_22))))
        _fail(t);
      {
        ATerm k_22 = ATgetArgument(t, 1);
        if(((ATgetType(k_22) != AT_LIST) || !(ATisEmpty(k_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm x_0 = NULL,z_0 = NULL,a_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
        {
          x_0 = ATgetFirst((ATermList) m_22);
          a_1 = (ATerm) ATgetNext((ATermList) m_22);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
          {
            z_0 = ATgetFirst((ATermList) n_22);
            c_1 = (ATerm) ATgetNext((ATermList) n_22);
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
ATerm q_14 (ATerm t)
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
      ATerm o_22 = ATgetFirst((ATermList) t);
      if(match_cons(o_22, sym__2))
        {
          m_0 = ATgetArgument(o_22, 0);
          q_0 = ATgetArgument(o_22, 1);
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
  t = genzip_4_0(k_14, p_14, q_14, _id, t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, r_0);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_85(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = a_86(t);
        t = g_1(t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm for_3_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  t = c_86(t);
  t = while_not_2_0(d_86, e_86, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_1);
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = _2_0(_id, v_14, t);
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm r_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, w_14, t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = r_22;
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
ATerm v_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
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
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm x_14 (ATerm t)
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
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_14, s_14, t_14, t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = diff_1_0(x_14, t);
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm j_75 (ATerm), ATerm t)
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
  t = j_75(t);
  w_2 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_2);
  n_0 = t;
  t = SSLsetAnnotations(n_0, u_2);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm t)
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
  t = a_75(t);
  p_3 = t;
  t = h_3;
  t = b_75(t);
  q_3 = t;
  t = m_3;
  t = c_75(t);
  r_3 = t;
  t = n_3;
  t = d_75(t);
  s_3 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, p_3, q_3, r_3, s_3);
  b_1 = t;
  t = SSLsetAnnotations(b_1, f_3);
  return(t);
}
ATerm SDefT_4_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,f_4 = NULL,g_4 = NULL,j_4 = NULL,x_4 = NULL,m_5 = NULL,z_5 = NULL,k_1 = NULL,l_1 = NULL;
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
  t = u_78(t);
  g_4 = t;
  t = b_4;
  t = v_78(t);
  j_4 = t;
  t = c_4;
  t = w_78(t);
  x_4 = t;
  t = f_4;
  t = x_78(t);
  m_5 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_4, j_4, x_4, m_5);
  k_1 = t;
  t = SSLsetAnnotations(k_1, y_3);
  return(t);
}
ATerm Scope_2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,d_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,n_1 = NULL,o_1 = NULL;
  p_7 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_7);
  w_6 = t;
  t = d_7;
  t = m_76(t);
  n_7 = t;
  t = m_7;
  t = n_76(t);
  o_7 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_7, o_7);
  n_1 = t;
  t = SSLsetAnnotations(n_1, w_6);
  return(t);
}
ATerm tboundin_3_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(i_114, g_114, t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(i_114, i_114, i_114, g_114, t);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            {
              ATerm c_23 = t;
              int d_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(i_114, i_114, i_114, g_114, t);
                  ;
                  LocalPopChoice(d_23);
                }
              else
                {
                  t = c_23;
                  t = DynamicRules_1_0(g_114, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm x_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_7);
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm z_7 = NULL,b_8 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_7 = ATgetArgument(t, 0);
            t = z_7;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm l_23 = ATgetArgument(t, 0);
                    ATerm m_23 = ATgetArgument(t, 1);
                    b_8 = ATgetArgument(t, 2);
                    {
                      ATerm t_23 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(k_23);
                t = b_8;
                t = map_1_0(c_15, t);
              }
            else
              {
                t = j_23;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm u_23 = ATgetArgument(t, 0);
                    ATerm v_23 = ATgetArgument(t, 1);
                    b_8 = ATgetArgument(t, 2);
                    {
                      ATerm y_23 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_8;
                t = map_1_0(d_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_8 = ATgetArgument(t, 0);
          {
            ATerm d_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_24);
      t = i_8;
    }
  else
    {
      t = b_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_8;
    }
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_8 = ATgetArgument(t, 0);
          {
            ATerm g_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_24);
      t = q_8;
    }
  else
    {
      t = e_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_8;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(a_15, b_15, tboundin_3_0, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm k_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_9);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm n_9 = NULL,q_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_9 = ATgetArgument(t, 0);
            t = n_9;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm q_24 = ATgetArgument(t, 0);
                    ATerm r_24 = ATgetArgument(t, 1);
                    q_9 = ATgetArgument(t, 2);
                    {
                      ATerm t_24 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_24);
                t = q_9;
                t = map_1_0(m_15, t);
              }
            else
              {
                t = n_24;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm u_24 = ATgetArgument(t, 0);
                    ATerm v_24 = ATgetArgument(t, 1);
                    q_9 = ATgetArgument(t, 2);
                    {
                      ATerm w_24 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_9;
                t = map_1_0(n_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm w_9 = NULL;
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_9 = ATgetArgument(t, 0);
          {
            ATerm z_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_24);
      t = w_9;
    }
  else
    {
      t = x_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_9;
    }
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_10 = ATgetArgument(t, 0);
          {
            ATerm c_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_25);
      t = d_10;
    }
  else
    {
      t = a_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_10;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_8 = NULL,f_9 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_9 = ATgetArgument(t, 0);
      t = f_9;
      if(match_cons(t, sym_Rule_3))
        {
          z_8 = ATgetArgument(t, 0);
          {
            ATerm d_25 = ATgetArgument(t, 1);
          }
          {
            ATerm e_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_8;
      t = free_vars_3_0(e_15, f_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_9 = ATgetArgument(t, 0);
          {
            ATerm f_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_9;
    }
  return(t);
}
ATerm union_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10;
  {
    ATerm o_10 (ATerm t)
    {
      ATerm g_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_10;
          ;
          LocalPopChoice(h_25);
        }
      else
        {
          t = g_25;
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
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
                t = n_10;
                {
                  ATerm s_15 (ATerm t)
                  {
                    ATerm i_1 = NULL;
                    i_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_1, i_1);
                    t = d_96(t);
                    return(t);
                  }
                  t = fetch_1_0(s_15, t);
                  t = h_1;
                  t = o_10(t);
                }
                ;
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
                t = Cons_2_0(_id, o_10, t);
              }
          }
        }
      return(t);
    }
    t = o_10(t);
  }
  return(t);
}
ATerm v_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = union_1_0(k_16, t);
  return(t);
}
ATerm k_16 (ATerm t)
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
ATerm l_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = union_1_0(n_16, t);
  return(t);
}
ATerm n_16 (ATerm t)
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
ATerm free_vars_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_113(t);
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
              ATerm v_10 = NULL,a_11 = NULL,q_1 = NULL,t_1 = NULL;
              v_10 = t;
              t = f_113(t);
              a_11 = t;
              t = v_10;
              {
                ATerm t_15 (ATerm t)
                {
                  ATerm m_1 = NULL;
                  t = e_11(t);
                  m_1 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_1, a_11);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_113(t_15, e_11, v_15, t);
                q_1 = t;
                t = SSL_explode_term(q_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_25 = ATgetArgument(t, 0);
                    t_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_1;
                t = foldr_3_0(i_16, j_16, _id, t);
              }
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              {
                ATerm z_1 = NULL,a_2 = NULL;
                z_1 = t;
                t = SSL_explode_term(z_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_25 = ATgetArgument(t, 0);
                    a_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_2;
                t = foldr_3_0(l_16, m_16, e_11, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm w_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_12);
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm y_12 = NULL,a_13 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_12 = ATgetArgument(t, 0);
            t = y_12;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm u_25 = ATgetArgument(t, 0);
                    ATerm v_25 = ATgetArgument(t, 1);
                    a_13 = ATgetArgument(t, 2);
                    {
                      ATerm w_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(t_25);
                t = a_13;
                t = map_1_0(r_16, t);
              }
            else
              {
                t = s_25;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm x_25 = ATgetArgument(t, 0);
                    ATerm y_25 = ATgetArgument(t, 1);
                    a_13 = ATgetArgument(t, 2);
                    {
                      ATerm z_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = a_13;
                t = map_1_0(u_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_13 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_26);
      t = g_13;
    }
  else
    {
      t = a_26;
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
ATerm u_16 (ATerm t)
{
  ATerm m_13 = NULL;
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_13 = ATgetArgument(t, 0);
          {
            ATerm f_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_26);
      t = m_13;
    }
  else
    {
      t = d_26;
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
ATerm c_17 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_13, term_i_26);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm t_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_13 = ATgetArgument(t, 0);
      {
        ATerm j_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_13), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm u_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_13 = ATgetArgument(t, 0);
      {
        ATerm k_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, u_13);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm n_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
      s_11 = ATgetArgument(t, 2);
      t_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_11;
  if(match_cons(t, sym_Seq_2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
      t = w_11;
      if(match_cons(t, sym_Match_1))
        {
          n_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, q_11, r_11, s_11, (ATerm) ATmakeAppl(sym_ScopeDefault_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_11), x_11)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          w_11 = ATgetArgument(t, 0);
          x_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_11;
      if(match_cons(t, sym_Seq_2))
        {
          y_11 = ATgetArgument(t, 0);
          a_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_11;
      if(match_cons(t, sym_Match_1))
        {
          z_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_11;
      t = free_vars_3_0(o_16, q_16, tboundin_3_0, t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, p_12);
      t = diff_0_0(t);
      q_12 = t;
      t = p_12;
      t = map_1_0(c_17, t);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_11, r_12);
      t = conc_0_0(t);
      s_12 = t;
      t = new_0_0(t);
      t_12 = t;
      t = r_11;
      t = map_1_0(d_17, t);
      u_12 = t;
      t = s_12;
      t = map_1_0(h_17, t);
      v_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_12, r_11, s_12, (ATerm) ATmakeAppl(sym_Scope_2, q_12, a_12))), (ATerm) ATmakeAppl(sym_SDefT_4, q_11, r_11, s_11, (ATerm) ATmakeAppl(sym_Scope_2, p_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_11), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_12), u_12, v_12)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm f_14 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_14, t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_92(t);
      }
    return(t);
  }
  t = f_14(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm x_13 = NULL,y_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_13 = ATgetFirst((ATermList) t);
            y_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_13;
        {
          ATerm i_17 (ATerm t)
          {
            t = y_13;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_17, t);
        }
      }
    }
  return(t);
}
ATerm u_14 (ATerm i_14, ATerm t)
{
  ATerm l_14 = NULL;
  t = SSL_explode_term(i_14);
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_17 (ATerm t)
            {
              t = n_14;
              return(t);
            }
            t = m_14;
            t = at_end_1_0(j_17, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = u_14(o_14, t);
          }
      }
    }
  else
    {
      t = u_14(o_14, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_98(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm y_14 = NULL,z_14 = NULL,g_15 = NULL,h_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_14 = ATgetFirst((ATermList) t);
            z_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_14;
        t = g_98(t);
        g_15 = t;
        t = z_14;
        t = foldr_3_0(e_98, f_98, g_98, t);
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_15, h_15);
        t = f_98(t);
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,p_1 = NULL,s_1 = NULL;
  l_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_15);
  i_15 = t;
  t = j_15;
  t = u_71(t);
  k_15 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_15);
  p_1 = t;
  t = SSLsetAnnotations(p_1, i_15);
  return(t);
}
ATerm Specification_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,u_1 = NULL,v_1 = NULL;
  r_15 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_15);
  o_15 = t;
  t = p_15;
  t = z_71(t);
  q_15 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_15);
  u_1 = t;
  t = SSLsetAnnotations(u_1, o_15);
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = Cons_2_0(_id, x_17, t);
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = Cons_2_0(a_18, e_18, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = Strategies_1_0(f_18, t);
  return(t);
}
ATerm e_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = foldr_3_0(_id, conc_0_0, j_18, t);
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm u_15 = NULL;
        u_15 = t;
        t = (ATerm) ATinsert(ATempty, u_15);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  t = Specification_1_0(k_17, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_15, term_w_26);
  t = open_stream_0_0(t);
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_15, x_15);
  t = q_104(t);
  t = fclose_0_0(t);
  t = x_15;
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(match_cons(x_26, sym_Stream_1))
        {
          b_16 = ATgetArgument(x_26, 0);
        }
      else
        _fail(t);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_16, c_16);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_16);
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,e_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(match_cons(y_26, sym_Stream_1))
        {
          e_16 = ATgetArgument(y_26, 0);
        }
      else
        _fail(t);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_16, f_16);
  g_16 = t;
  i_3 = t;
  t = term_z_26;
  e_3 = t;
  t = SSL_fputc(e_3, g_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_16);
  return(t);
}
ATerm output_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  t = z_108(t);
  z_15 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL;
        t = term_c_27;
        f_2 = t;
        t = term_d_27;
        w_1 = t;
        t = f_2;
        g_2 = t;
        t = term_c_27;
        d_2 = t;
        t = SSL_table_get(w_1, d_2);
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,p_2 = NULL;
              t = eval_config_0_0(t);
              z_2 = t;
              k_2 = t;
              t = term_d_27;
              h_2 = t;
              t = k_2;
              p_2 = t;
              t = term_c_27;
              i_2 = t;
              t = SSL_table_put(h_2, i_2, z_2);
              t = z_2;
              ;
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
            }
        }
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = term_g_27;
      }
    a_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, z_15);
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,x_2 = NULL;
          t = term_j_27;
          s_2 = t;
          t = term_d_27;
          q_2 = t;
          t = s_2;
          x_2 = t;
          t = term_j_27;
          r_2 = t;
          t = SSL_table_get(q_2, r_2);
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_3 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL;
                t = eval_config_0_0(t);
                j_3 = t;
                c_3 = t;
                t = term_d_27;
                y_2 = t;
                t = c_3;
                d_3 = t;
                t = term_j_27;
                a_3 = t;
                t = SSL_table_put(y_2, a_3, j_3);
                t = j_3;
                ;
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
              }
            t = (ATerm) ATmakeAppl(sym__2, a_16, z_15);
          }
          LocalPopChoice(i_27);
          t = WriteToFile_1_0(k_18, t);
        }
      else
        {
          t = h_27;
          t = WriteToFile_1_0(o_18, t);
        }
    }
  }
  return(t);
}
ATerm v_16 (ATerm p_16, ATerm t)
{
  t = SSL_fclose(p_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_16 = ATgetArgument(t, 0);
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_16);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = v_16(t_16, t);
          }
      }
    }
  else
    {
      t = v_16(t_16, t);
    }
  return(t);
}
ATerm _2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,k_3 = NULL,l_3 = NULL;
  b_17 = t;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  w_16 = t;
  t = x_16;
  t = b_67(t);
  z_16 = t;
  t = y_16;
  t = c_67(t);
  a_17 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_16, a_17);
  k_3 = t;
  t = SSLsetAnnotations(k_3, w_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_17 = NULL;
  t = SSL_stdin_stream();
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = SSL_stdout_stream();
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_17 = NULL;
  t = SSL_stderr_stream();
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_17);
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm o_17 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_17;
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  t = SSL_is_string(s_17);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      ATerm p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL,i_4 = NULL;
        h_4 = t;
        t = SSL_explode_term(h_4);
        if(match_cons(t, sym__2))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_27 = ATgetArgument(t, 1);
              if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
                {
                  i_4 = ATgetFirst((ATermList) t_27);
                  {
                    ATerm u_27 = (ATerm) ATgetNext((ATermList) t_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
              t = _2_0(p_18, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_17 = ATgetArgument(t, 0);
                  m_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_17, m_17);
              n_17 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_17);
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              {
                ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                t = _2_0(r_18, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_17 = ATgetArgument(t, 0);
                    q_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_17, q_17);
                r_17 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_17);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL;
      w_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_17, term_z_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm k_4 = NULL,o_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
        k_4 = t;
        t = term_a_28;
        v_3 = t;
        t = term_b_28;
        o_3 = t;
        t = v_3;
        w_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, k_4), term_a_28);
        u_3 = t;
        t = SSL_printnl(o_3, u_3);
        t = k_4;
        _fail(t);
      }
    }
  t_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_17);
  u_17 = t;
  t = t_17;
  t = fclose_0_0(t);
  t = u_17;
  return(t);
}
ATerm input_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 = NULL,a_4 = NULL,d_4 = NULL,e_4 = NULL;
      t = term_e_28;
      d_4 = t;
      t = term_d_27;
      x_3 = t;
      t = d_4;
      e_4 = t;
      t = term_e_28;
      a_4 = t;
      t = SSL_table_get(x_3, a_4);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
            t = eval_config_0_0(t);
            q_4 = t;
            n_4 = t;
            t = term_d_27;
            l_4 = t;
            t = n_4;
            o_4 = t;
            t = term_e_28;
            m_4 = t;
            t = SSL_table_put(l_4, m_4, q_4);
            t = q_4;
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
          }
      }
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = term_h_28;
    }
  t = ReadFromFile_0_0(t);
  t = a_109(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,y_4 = NULL,z_4 = NULL;
  y_17 = t;
  t = term_i_28;
  t = whoami_0_0(t);
  z_17 = t;
  s_4 = t;
  t = term_b_28;
  p_4 = t;
  t = s_4;
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_28), z_17), term_j_28);
  r_4 = t;
  t = SSL_printnl(p_4, r_4);
  z_4 = t;
  t = term_l_28;
  y_4 = t;
  t = SSL_exit(y_4);
  t = y_17;
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  if(match_string(t, "-k"))
    {
      t = b_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_18;
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  c_18 = t;
  t = SSL_string_to_int(c_18);
  d_18 = t;
  e_5 = t;
  t = term_d_27;
  c_5 = t;
  t = e_5;
  f_5 = t;
  t = term_m_28;
  d_5 = t;
  t = SSL_table_put(c_5, d_5, d_18);
  t = c_18;
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_18, v_18, a_19, t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm g_18 = NULL;
  g_18 = t;
  if(match_string(t, "-S"))
    {
      t = g_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_18;
    }
  return(t);
}
ATerm c_19 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  t = term_d_27;
  g_5 = t;
  t = j_5;
  k_5 = t;
  t = term_o_28;
  h_5 = t;
  t = k_5;
  l_5 = t;
  t = term_p_28;
  i_5 = t;
  t = SSL_table_put(g_5, h_5, i_5);
  t = term_q_28;
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm e_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL;
  h_18 = t;
  t = SSL_string_to_int(h_18);
  i_18 = t;
  q_5 = t;
  t = term_d_27;
  n_5 = t;
  t = q_5;
  r_5 = t;
  t = term_o_28;
  o_5 = t;
  t = SSL_table_put(n_5, o_5, i_18);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_18);
  return(t);
}
ATerm g_19 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm m_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL,a_6 = NULL;
  w_5 = t;
  t = term_d_27;
  s_5 = t;
  t = w_5;
  y_5 = t;
  t = term_t_28;
  u_5 = t;
  t = y_5;
  a_6 = t;
  t = term_i_28;
  v_5 = t;
  t = SSL_table_put(s_5, u_5, v_5);
  t = term_u_28;
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_19, c_19, d_19, t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_19, f_19, g_19, t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = Option_3_0(m_19, n_19, o_19, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_18 = NULL;
      t = term_i_28;
      t = d_0(t);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_29, term_b_29, n_18);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_18 = ATgetFirst((ATermList) t);
          m_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_18;
      t = a_0(t);
      t = term_i_28;
      t = c_0(t);
      q_18 = t;
      t = (ATerm) ATinsert(CheckATermList(m_18), q_18);
    }
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  if(match_string(t, "-o"))
    {
      t = s_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_18;
    }
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm t_18 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
  t_18 = t;
  e_6 = t;
  t = term_d_27;
  b_6 = t;
  t = e_6;
  f_6 = t;
  t = term_c_27;
  d_6 = t;
  t = SSL_table_put(b_6, d_6, t_18);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_18);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_19, u_19, v_19, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,g_6 = NULL,h_6 = NULL;
  if(match_cons(t, sym__3))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      y_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_18, x_18);
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            ATerm g_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_18, x_18);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATempty;
      }
    z_18 = t;
    h_6 = t;
    t = (ATerm) ATinsert(CheckATermList(z_18), y_18);
    g_6 = t;
    t = SSL_table_put(w_18, x_18, g_6);
    t = (ATerm) ATmakeAppl(sym__3, w_18, x_18, y_18);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_19 = NULL;
      t = term_i_28;
      t = j_0(t);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_29, term_b_29, l_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_19 = ATgetFirst((ATermList) t);
          i_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_19 = ATgetFirst((ATermList) t);
          k_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_19;
      t = h_0(t);
      t = j_19;
      t = i_0(t);
      p_19 = t;
      t = (ATerm) ATinsert(CheckATermList(k_19), p_19);
    }
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  if(match_string(t, "-i"))
    {
      t = r_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_19;
    }
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm s_19 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  s_19 = t;
  k_6 = t;
  t = term_d_27;
  i_6 = t;
  t = k_6;
  l_6 = t;
  t = term_e_28;
  j_6 = t;
  t = SSL_table_put(i_6, j_6, s_19);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_19);
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_19, z_19, a_20, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_19 = NULL,q_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,r_6 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_28;
  t = whoami_0_0(t);
  t_19 = t;
  o_6 = t;
  t = term_b_28;
  m_6 = t;
  t = o_6;
  p_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_29), t_19);
  n_6 = t;
  t = SSL_printnl(m_6, n_6);
  r_6 = t;
  t = term_l_28;
  q_6 = t;
  t = SSL_exit(q_6);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t = term_j_29;
  u_6 = t;
  t = term_d_27;
  s_6 = t;
  t = u_6;
  v_6 = t;
  t = term_j_29;
  t_6 = t;
  t = SSL_table_get(s_6, t_6);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
        t = eval_config_0_0(t);
        u_4 = t;
        a_7 = t;
        t = term_d_27;
        x_6 = t;
        t = a_7;
        b_7 = t;
        t = term_j_29;
        z_6 = t;
        t = SSL_table_put(x_6, z_6, u_4);
        t = u_4;
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_98(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm w_19 = NULL,x_19 = NULL,d_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_19 = ATgetFirst((ATermList) t);
            x_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_19;
        t = foldr_2_0(c_98, d_98, t);
        d_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_19, d_20);
        t = d_98(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_5, b_5);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = SSL_addr(a_5, b_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_20 = NULL,v_4 = NULL,w_4 = NULL;
  t = times_0_0(t);
  v_4 = t;
  t = SSL_explode_term(v_4);
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4;
  t = foldr_2_0(b_20, c_20, t);
  i_20 = t;
  t = SSL_TicksToSeconds(i_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_20;
        if((w_20 != t))
          {
            _fail(t);
          }
        t = v_20;
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = v_20;
        {
          ATerm t_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_20, x_20);
              ;
              LocalPopChoice(u_29);
            }
          else
            {
              t = t_29;
              t = SSL_gtr(w_20, x_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_21 = NULL,c_21 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
      a_21 = t;
      t = term_o_28;
      f_7 = t;
      t = term_d_27;
      c_7 = t;
      t = f_7;
      g_7 = t;
      t = term_o_28;
      e_7 = t;
      t = SSL_table_get(c_7, e_7);
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = NULL,h_7 = NULL,k_7 = NULL,l_7 = NULL,q_7 = NULL;
            t = eval_config_0_0(t);
            p_5 = t;
            l_7 = t;
            t = term_d_27;
            h_7 = t;
            t = l_7;
            q_7 = t;
            t = term_o_28;
            k_7 = t;
            t = SSL_table_put(h_7, k_7, p_5);
            t = p_5;
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
          }
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, term_l_28);
        t = geq_0_0(t);
        t = a_21;
        t = a_106(t);
      }
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
    }
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  t = run_time_0_0(t);
  e_21 = t;
  t = term_i_28;
  t = whoami_0_0(t);
  f_21 = t;
  t_7 = t;
  t = term_b_28;
  r_7 = t;
  t = t_7;
  u_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_30), e_21), term_z_29), f_21);
  s_7 = t;
  t = SSL_printnl(r_7, s_7);
  t = (ATerm) ATmakeAppl(sym__2, term_b_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_30), e_21), term_z_29), f_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_20, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  t = report_run_time_0_0(t);
  w_7 = t;
  t = term_p_28;
  v_7 = t;
  t = SSL_exit(v_7);
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL,a_8 = NULL,c_8 = NULL,d_8 = NULL;
      t = term_h_30;
      c_8 = t;
      t = term_d_27;
      y_7 = t;
      t = c_8;
      d_8 = t;
      t = term_h_30;
      a_8 = t;
      t = SSL_table_get(y_7, a_8);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
            t = eval_config_0_0(t);
            t_5 = t;
            g_8 = t;
            t = term_d_27;
            e_8 = t;
            t = g_8;
            h_8 = t;
            t = term_h_30;
            f_8 = t;
            t = SSL_table_put(e_8, f_8, t_5);
            t = t_5;
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
          }
      }
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = fetch_1_0(f_20, t);
    }
  t = q_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_21 = ATgetFirst((ATermList) t);
      i_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_21 = NULL,n_21 = NULL;
        t = i_21;
        t = g_0(t);
        m_21 = t;
        t = h_21;
        t = e_0(t);
        n_21 = t;
        t = i_21;
        {
          ATerm g_20 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_21), n_21);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_20, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_28;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,j_8 = NULL,k_8 = NULL;
  r_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  o_21 = t;
  t = p_21;
  t = i_84(t);
  q_21 = t;
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_21);
  j_8 = t;
  t = SSLsetAnnotations(j_8, o_21);
  return(t);
}
ATerm h_20 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_21), term_k_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
      t = term_j_29;
      n_8 = t;
      t = term_d_27;
      l_8 = t;
      t = n_8;
      o_8 = t;
      t = term_j_29;
      m_8 = t;
      t = SSL_table_get(l_8, m_8);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,p_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
            t = eval_config_0_0(t);
            x_5 = t;
            s_8 = t;
            t = term_d_27;
            p_8 = t;
            t = s_8;
            t_8 = t;
            t = term_j_29;
            r_8 = t;
            t = SSL_table_put(p_8, r_8, x_5);
            t = x_5;
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
          }
      }
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = fetch_1_0(h_20, t);
    }
  t = term_p_30;
  t = echo_0_0(t);
  w_8 = t;
  t = term_a_29;
  u_8 = t;
  t = w_8;
  x_8 = t;
  t = term_b_29;
  v_8 = t;
  t = SSL_table_get(u_8, v_8);
  t = reverse_acc_2_0(_id, j_20, t);
  t = map_1_0(k_20, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,y_8 = NULL,a_9 = NULL;
  y_21 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_21);
  v_21 = t;
  t = w_21;
  t = j_84(t);
  x_21 = t;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_21);
  y_8 = t;
  t = SSLsetAnnotations(y_8, v_21);
  return(t);
}
ATerm fetch_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm b_22 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_92, _id, t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = Cons_2_0(_id, b_22, t);
      }
    return(t);
  }
  t = b_22(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,b_9 = NULL,c_9 = NULL;
  d_22 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_30 = ATgetFirst((ATermList) t);
                ATerm v_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_22;
          }
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, d_22);
      }
    e_22 = t;
    c_9 = t;
    t = term_g_27;
    b_9 = t;
    t = SSL_printnl(b_9, e_22);
    t = d_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  t = term_j_29;
  h_9 = t;
  t = term_d_27;
  e_9 = t;
  t = h_9;
  i_9 = t;
  t = term_j_29;
  g_9 = t;
  t = SSL_table_get(e_9, g_9);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL,j_9 = NULL,l_9 = NULL,m_9 = NULL,o_9 = NULL;
        t = eval_config_0_0(t);
        c_6 = t;
        m_9 = t;
        t = term_d_27;
        j_9 = t;
        t = m_9;
        o_9 = t;
        t = term_j_29;
        l_9 = t;
        t = SSL_table_put(j_9, l_9, c_6);
        t = c_6;
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm map_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm l_22 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = Cons_2_0(z_91, l_22, t);
      }
    return(t);
  }
  t = l_22(t);
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_22 = NULL;
      s_22 = t;
      t = SSL_is_string(s_22);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_20, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
              e_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_23 = ATgetArgument(t, 0);
                  t = f_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_23 = ATgetArgument(t, 0);
                      t = f_23;
                      {
                        ATerm g_31 = t;
                        int h_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_9 = NULL,r_9 = NULL;
                            r_9 = t;
                            t = term_d_27;
                            p_9 = t;
                            t = SSL_table_get(p_9, f_23);
                            {
                              ATerm i_31 = t;
                              int j_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_6 = NULL,s_9 = NULL,t_9 = NULL;
                                  t = eval_config_0_0(t);
                                  y_6 = t;
                                  t_9 = t;
                                  t = term_d_27;
                                  s_9 = t;
                                  t = SSL_table_put(s_9, f_23, y_6);
                                  t = y_6;
                                  ;
                                  LocalPopChoice(j_31);
                                }
                              else
                                {
                                  t = i_31;
                                }
                            }
                            ;
                            LocalPopChoice(h_31);
                          }
                        else
                          {
                            t = g_31;
                            {
                              ATerm u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL;
                              t = term_k_31;
                              x_9 = t;
                              t = term_b_28;
                              u_9 = t;
                              t = x_9;
                              y_9 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, f_23), term_k_31);
                              v_9 = t;
                              t = SSL_printnl(u_9, v_9);
                              t = f_23;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm i_7 = NULL,j_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_23 = ATgetArgument(t, 0);
                          g_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_23;
                      t = eval_config_0_0(t);
                      i_7 = t;
                      t = g_23;
                      t = eval_config_0_0(t);
                      j_7 = t;
                      t = SSL_strcat(i_7, j_7);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL;
  c_10 = t;
  t = term_d_27;
  z_9 = t;
  t = c_10;
  e_10 = t;
  t = term_l_31;
  a_10 = t;
  t = e_10;
  f_10 = t;
  t = term_i_28;
  b_10 = t;
  t = SSL_table_put(z_9, a_10, b_10);
  t = term_m_31;
  return(t);
}
ATerm o_20 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm p_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_20 (ATerm t)
{
  ATerm g_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL;
  k_10 = t;
  t = term_d_27;
  g_10 = t;
  t = k_10;
  l_10 = t;
  t = term_l_31;
  i_10 = t;
  t = l_10;
  p_10 = t;
  t = term_i_28;
  j_10 = t;
  t = SSL_table_put(g_10, i_10, j_10);
  t_10 = t;
  t = term_d_27;
  q_10 = t;
  t = t_10;
  u_10 = t;
  t = term_o_31;
  r_10 = t;
  t = u_10;
  w_10 = t;
  t = term_i_28;
  s_10 = t;
  t = SSL_table_put(q_10, r_10, s_10);
  t = term_p_31;
  return(t);
}
ATerm r_20 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_20, n_20, o_20, t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      t = Option_3_0(p_20, q_20, r_20, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,x_10 = NULL,y_10 = NULL;
  s_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_23);
  n_23 = t;
  t = o_23;
  t = q_71(t);
  q_23 = t;
  t = p_23;
  t = r_71(t);
  r_23 = t;
  y_10 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), q_23);
  x_10 = t;
  t = SSLsetAnnotations(x_10, n_23);
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm x_23 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  x_23 = t;
  c_11 = t;
  t = term_d_27;
  z_10 = t;
  t = c_11;
  d_11 = t;
  t = term_j_29;
  b_11 = t;
  t = SSL_table_put(z_10, b_11, x_23);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_31;
        t = t_110(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
      }
    t = w_23;
    {
      ATerm t_20 (ATerm t)
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_31 = t;
            int z_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_31);
              }
            else
              {
                t = y_31;
                t = t_110(t);
                t = Cons_2_0(_id, t_20, t);
              }
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm z_23 = NULL,a_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_23 = ATgetFirst((ATermList) t);
                  a_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATmakeAppl(sym_Undefined_1, z_23));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_20, t_20, t);
    }
  }
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  if(match_string(t, "--help"))
    {
      t = k_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_24;
        }
    }
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,u_11 = NULL,v_11 = NULL;
  p_11 = t;
  t = term_d_27;
  l_11 = t;
  t = p_11;
  u_11 = t;
  t = term_h_30;
  m_11 = t;
  t = u_11;
  v_11 = t;
  t = term_i_28;
  o_11 = t;
  t = SSL_table_put(l_11, m_11, o_11);
  t = term_a_32;
  return(t);
}
ATerm b_21 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm d_21 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,n_13 = NULL,o_13 = NULL;
  h_24 = t;
  i_11 = t;
  t = term_a_29;
  f_11 = t;
  t = i_11;
  j_11 = t;
  t = term_b_29;
  g_11 = t;
  t = j_11;
  k_11 = t;
  t = (ATerm) ATempty;
  h_11 = t;
  t = SSL_table_put(f_11, g_11, h_11);
  t = h_24;
  {
    ATerm u_20 (ATerm t)
    {
      ATerm c_32 = t;
      int d_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_110(t);
          ;
          LocalPopChoice(d_32);
        }
      else
        {
          t = c_32;
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_20, z_20, b_21, t);
                ;
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_20, t);
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_24 = NULL;
          p_24 = t;
          {
            ATerm i_32 = t;
            int j_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_12 = NULL,k_12 = NULL;
                t = p_24;
                {
                  ATerm k_32 = t;
                  int l_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
                      t = term_h_30;
                      d_12 = t;
                      t = term_d_27;
                      b_12 = t;
                      t = d_12;
                      e_12 = t;
                      t = term_h_30;
                      c_12 = t;
                      t = SSL_table_get(b_12, c_12);
                      {
                        ATerm m_32 = t;
                        int n_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_9 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
                            t = eval_config_0_0(t);
                            d_9 = t;
                            h_12 = t;
                            t = term_d_27;
                            f_12 = t;
                            t = h_12;
                            i_12 = t;
                            t = term_h_30;
                            g_12 = t;
                            t = SSL_table_put(f_12, g_12, d_9);
                            t = d_9;
                            ;
                            LocalPopChoice(n_32);
                          }
                        else
                          {
                            t = m_32;
                          }
                      }
                      ;
                      LocalPopChoice(l_32);
                    }
                  else
                    {
                      t = k_32;
                      t = fetch_1_0(d_21, t);
                    }
                  t = p_24;
                  t = default_system_usage_0_0(t);
                  k_12 = t;
                  t = term_p_28;
                  j_12 = t;
                  t = SSL_exit(j_12);
                }
                ;
                LocalPopChoice(j_32);
              }
            else
              {
                t = i_32;
                {
                  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,d_13 = NULL,e_13 = NULL;
                  t = term_l_31;
                  n_12 = t;
                  t = term_d_27;
                  l_12 = t;
                  t = n_12;
                  o_12 = t;
                  t = term_l_31;
                  m_12 = t;
                  t = SSL_table_get(l_12, m_12);
                  {
                    ATerm o_32 = t;
                    int p_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_10 = NULL,x_12 = NULL,z_12 = NULL,b_13 = NULL,c_13 = NULL;
                        t = eval_config_0_0(t);
                        h_10 = t;
                        b_13 = t;
                        t = term_d_27;
                        x_12 = t;
                        t = b_13;
                        c_13 = t;
                        t = term_l_31;
                        z_12 = t;
                        t = SSL_table_put(x_12, z_12, h_10);
                        t = h_10;
                        ;
                        LocalPopChoice(p_32);
                      }
                    else
                      {
                        t = o_32;
                      }
                    t = p_24;
                    t = default_system_about_0_0(t);
                    e_13 = t;
                    t = term_p_28;
                    d_13 = t;
                    t = SSL_exit(d_13);
                  }
                }
              }
          }
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                ATerm g_21 (ATerm t)
                {
                  ATerm j_21 (ATerm t)
                  {
                    if(((i_24 != NULL) && (i_24 != t)))
                      _fail(t);
                    else
                      i_24 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_21, t);
                  return(t);
                }
                t = fetch_1_0(g_21, t);
                i_13 = t;
                t = term_b_28;
                f_13 = t;
                t = i_13;
                j_13 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), term_s_32);
                h_13 = t;
                t = SSL_printnl(f_13, h_13);
                t = (ATerm) ATmakeAppl(sym__2, term_b_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), term_s_32));
                t = default_system_usage_0_0(t);
                l_13 = t;
                t = term_l_28;
                k_13 = t;
                t = SSL_exit(k_13);
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
              }
          }
        }
      j_24 = t;
      o_13 = t;
      t = term_a_29;
      n_13 = t;
      t = SSL_table_destroy(n_13);
      t = j_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,v_13 = NULL,w_13 = NULL,z_13 = NULL;
  t = parse_options_1_0(s_108, t);
  s_24 = t;
  q_13 = t;
  t = term_t_32;
  p_13 = t;
  t = SSL_table_create(p_13);
  w_13 = t;
  t = term_t_32;
  r_13 = t;
  t = w_13;
  z_13 = t;
  t = term_u_32;
  v_13 = t;
  t = SSL_table_put(r_13, v_13, s_24);
  t = s_24;
  t = u_108(t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_108, t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            {
              ATerm d_33 = t;
              int e_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(s_21, t_21, z_21, t);
                  ;
                  LocalPopChoice(e_33);
                }
              else
                {
                  t = d_33;
                  {
                    ATerm f_33 = t;
                    int g_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(g_33);
                      }
                    else
                      {
                        t = f_33;
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
ATerm l_21 (ATerm t)
{
  t = input_1_0(a_22, t);
  return(t);
}
ATerm s_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,g_14 = NULL,h_14 = NULL;
  d_14 = t;
  t = term_d_27;
  a_14 = t;
  t = d_14;
  g_14 = t;
  t = term_j_27;
  b_14 = t;
  t = g_14;
  h_14 = t;
  t = term_i_28;
  c_14 = t;
  t = SSL_table_put(a_14, b_14, c_14);
  t = term_h_33;
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm a_22 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_21, default_usage_0_0, _id, l_21, t);
  return(t);
}
